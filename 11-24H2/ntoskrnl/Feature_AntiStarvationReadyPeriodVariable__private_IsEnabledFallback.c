/*
 * XREFs of Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledFallback @ 0x1405B1F64
 * Callers:
 *     Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B1F2C (Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AntiStarvationReadyPeriodVariable__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_AntiStarvationReadyPeriodVariable__private_descriptor);
}
