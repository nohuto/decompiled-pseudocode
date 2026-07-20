/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14001A5C0
 * Callers:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x140019D04 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x140019D48 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback.c)
 *     Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledFallback @ 0x14001C058 (Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14001A204 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001A338 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14001A448 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
