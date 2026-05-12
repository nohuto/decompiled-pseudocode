/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140068770
 * Callers:
 *     Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback @ 0x1400565D8 (Feature_Servicing_StorageSetProperty_BufferCheck__private_IsEnabledFallback.c)
 *     Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback @ 0x14005662C (Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140056680 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 *     Feature_TBTNVMe_RTD3__private_IsEnabledFallback @ 0x1400566D4 (Feature_TBTNVMe_RTD3__private_IsEnabledFallback.c)
 *     Feature_FixSteelixUfsIceRegression__private_IsEnabledFallback @ 0x1400695A0 (Feature_FixSteelixUfsIceRegression__private_IsEnabledFallback.c)
 *     Feature_Servicing_AtaOutOfBoundAccessFix__private_IsEnabledFallback @ 0x140090474 (Feature_Servicing_AtaOutOfBoundAccessFix__private_IsEnabledFallback.c)
 *     Feature_SteelixLbaSizeFix__private_IsEnabledFallback @ 0x1400904C8 (Feature_SteelixLbaSizeFix__private_IsEnabledFallback.c)
 *     Feature_FixFUAIssueForPerformance__private_IsEnabledFallback @ 0x1400A5298 (Feature_FixFUAIssueForPerformance__private_IsEnabledFallback.c)
 *     Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback @ 0x1400A52EC (Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback.c)
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback @ 0x1400A5340 (Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback.c)
 *     Feature_FixPerformanceIssueWithTRIM__private_IsEnabledFallback @ 0x1400A5394 (Feature_FixPerformanceIssueWithTRIM__private_IsEnabledFallback.c)
 *     Feature_NativeNVMeStackForGeClient__private_IsEnabledFallback @ 0x1400A53E8 (Feature_NativeNVMeStackForGeClient__private_IsEnabledFallback.c)
 *     Feature_NativeNVMeStackForGeServer__private_IsEnabledFallback @ 0x1400A543C (Feature_NativeNVMeStackForGeServer__private_IsEnabledFallback.c)
 *     Feature_Servicing_NativeNVMe__private_IsEnabledFallback @ 0x1400A5490 (Feature_Servicing_NativeNVMe__private_IsEnabledFallback.c)
 *     Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledFallback @ 0x1400A54E4 (Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledFallback.c)
 *     Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback @ 0x1400AAB48 (Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback @ 0x1400AAB9C (Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback.c)
 *     Feature_UfsTelemetryAndHealth__private_IsEnabledFallback @ 0x1400AABF0 (Feature_UfsTelemetryAndHealth__private_IsEnabledFallback.c)
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledFallback @ 0x1400CB6E4 (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledFallback.c)
 *     Feature_FixTrimRequestParameterValidation__private_IsEnabledFallback @ 0x1400FA290 (Feature_FixTrimRequestParameterValidation__private_IsEnabledFallback.c)
 *     Feature_GeDlrmFixInitRace__private_IsEnabledFallback @ 0x1401391EC (Feature_GeDlrmFixInitRace__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140068378 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400684EC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400685FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
