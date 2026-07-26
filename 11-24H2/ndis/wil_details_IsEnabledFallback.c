/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140090368
 * Callers:
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback @ 0x14008F778 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback.c)
 *     Feature_CFHCancelTimerFix__private_IsEnabledFallback @ 0x140090F48 (Feature_CFHCancelTimerFix__private_IsEnabledFallback.c)
 *     Feature_NDPQualitySpring26__private_IsEnabledFallback @ 0x140092E94 (Feature_NDPQualitySpring26__private_IsEnabledFallback.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledFallback @ 0x140092EE8 (Feature_NDPQualitySummer26__private_IsEnabledFallback.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledFallback @ 0x140092F3C (Feature_NDPQualityWinter26__private_IsEnabledFallback.c)
 *     Feature_NdisTriageData__private_IsEnabledFallback @ 0x140092F90 (Feature_NdisTriageData__private_IsEnabledFallback.c)
 *     Feature_NVBugFixes2507__private_IsEnabledFallback @ 0x140095974 (Feature_NVBugFixes2507__private_IsEnabledFallback.c)
 *     Feature_NdisDetectCircularNblChain__private_IsEnabledFallback @ 0x1400959C8 (Feature_NdisDetectCircularNblChain__private_IsEnabledFallback.c)
 *     Feature_NDPSfiSpring2026__private_IsEnabledFallback @ 0x14009F380 (Feature_NDPSfiSpring2026__private_IsEnabledFallback.c)
 *     Feature_BindEngineWatchdog__private_IsEnabledFallback @ 0x1400C64E0 (Feature_BindEngineWatchdog__private_IsEnabledFallback.c)
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback @ 0x1400C81E8 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback.c)
 *     Feature_UDFDOD__private_IsEnabledFallback @ 0x1400E6E78 (Feature_UDFDOD__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14008FF68 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400900DC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400901EC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
