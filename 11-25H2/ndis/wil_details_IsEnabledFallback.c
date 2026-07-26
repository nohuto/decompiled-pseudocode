/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14009FF00
 * Callers:
 *     Feature_NDPQualitySpring25__private_IsEnabledFallback @ 0x14009F4C4 (Feature_NDPQualitySpring25__private_IsEnabledFallback.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledFallback @ 0x14009F518 (Feature_NDPQualityWinter25__private_IsEnabledFallback.c)
 *     Feature_NVBugFixes2507__private_IsEnabledFallback @ 0x14009F56C (Feature_NVBugFixes2507__private_IsEnabledFallback.c)
 *     Feature_SSDeadlock_Fix__private_IsEnabledFallback @ 0x1400A9830 (Feature_SSDeadlock_Fix__private_IsEnabledFallback.c)
 *     Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledFallback @ 0x1400D2B80 (Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledFallback.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback @ 0x1400D2BD4 (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledFallback.c)
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledFallback @ 0x1400D2C28 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledFallback.c)
 *     Feature_NDPCyberEO2508__private_IsEnabledFallback @ 0x1400D3D9C (Feature_NDPCyberEO2508__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14009FAB8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14009FC2C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14009FD3C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
