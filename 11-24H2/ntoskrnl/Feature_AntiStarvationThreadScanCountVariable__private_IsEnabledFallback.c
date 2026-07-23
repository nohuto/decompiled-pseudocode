/*
 * XREFs of Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledFallback @ 0x1405B2120
 * Callers:
 *     Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B20E8 (Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_AntiStarvationThreadScanCountVariable__private_descriptor);
}
