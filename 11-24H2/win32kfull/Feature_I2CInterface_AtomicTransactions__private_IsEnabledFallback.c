/*
 * XREFs of Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x1403226F0
 * Callers:
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x1403226B8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_I2CInterface_AtomicTransactions__private_descriptor);
}
