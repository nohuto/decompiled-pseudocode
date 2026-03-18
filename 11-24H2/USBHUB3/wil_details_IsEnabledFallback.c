/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1400105BC
 * Callers:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x14000C898 (Feature_EUSB2__private_IsEnabledFallback.c)
 *     Feature_RH1S__private_IsEnabledFallback @ 0x14000C8EC (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_RH5S__private_IsEnabledFallback @ 0x14000C940 (Feature_RH5S__private_IsEnabledFallback.c)
 *     Feature_U3RHDC__private_IsEnabledFallback @ 0x14000C994 (Feature_U3RHDC__private_IsEnabledFallback.c)
 *     Feature_UH3WET__private_IsEnabledFallback @ 0x140014B10 (Feature_UH3WET__private_IsEnabledFallback.c)
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400261F4 (Feature_UISCSF__private_IsEnabledFallback.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140045768 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400100D4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400102EC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140010558 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2, volatile signed __int32 **a3)
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
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
