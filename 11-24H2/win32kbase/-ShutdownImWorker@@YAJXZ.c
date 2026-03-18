/*
 * XREFs of ?ShutdownImWorker@@YAJXZ @ 0x1401451F0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ImpShutdownWorker @ 0x140145278 (ImpShutdownWorker.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 ShutdownImWorker(void)
{
  __int64 v0; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  v2 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v2) = Feature_WebThreatDefenseToggle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
      Feature_WebThreatDefenseToggle__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3LL,
      &Feature_WebThreatDefenseToggle__private_descriptor);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v0) + 42616) )
    return ImpShutdownWorker();
  else
    return 0LL;
}
