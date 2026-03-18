/*
 * XREFs of Feature_I2CInterface_V2__private_IsEnabledFallback @ 0x14007DCD8
 * Callers:
 *     Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x14007DCA0 (Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_I2CInterface_V2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_I2CInterface_V2__private_descriptor);
}
