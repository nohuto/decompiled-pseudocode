/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14001056C
 * Callers:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x14000C898 (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_RH5S__private_IsEnabledFallback @ 0x14000C8EC (Feature_RH5S__private_IsEnabledFallback.c)
 *     Feature_UTSP__private_IsEnabledFallback @ 0x14000C940 (Feature_UTSP__private_IsEnabledFallback.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044F28 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140010084 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14001029C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140010508 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
