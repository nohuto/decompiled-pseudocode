/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14006329C
 * Callers:
 *     Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback @ 0x140062AB8 (Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x140064618 (Feature_EE_MPTF_Functionality__private_IsEnabledFallback.c)
 *     Feature_Servicing_NewOsiString__private_IsEnabledFallback @ 0x14006F5A4 (Feature_Servicing_NewOsiString__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140062E74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140062FEC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400630FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  char v6; // di

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
