#include "platform.h"
i2c_obj_t i2c0_master;
void platform_init(void)
{
    led_init();                        /* 初始化LED */
    key_init();                        /* 初始化按键 */
    i2c0_master = iic_init(I2C_NUM_0); /* 初始化IIC0 */
    spi2_init();                       /* 初始化SPI2 */
    xl9555_init(i2c0_master);          /* IO扩展芯片初始化 */
    lcd_init();
}
