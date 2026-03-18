/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1404D4570
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB922C (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopIsRemoteDesktopEnabled @ 0x140AB9514 (PopIsRemoteDesktopEnabled.c)
 */

void __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  KIRQL v7; // r14
  __int64 v8; // [rsp+40h] [rbp+8h]

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset_0(PopCsResiliencyStats, 0, 0x150uLL);
  qword_140F0A768 = -1LL;
  byte_140F0A6E2 = byte_140F0B764;
  byte_140F0A6E1 = dword_140F0B70C == 0;
  dword_140F0A710 = PopNetStandbyReason;
  byte_140F0A6E3 = byte_140F0B765;
  PopCsResiliencyStats[0] = 1;
  byte_140F0A715 = PopNetBIRequestActive;
  byte_140F0A714 = IsRemoteDesktopEnabled;
  v8 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    LODWORD(v8) = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_EcoModeEnergySaver__private_descriptor, v8, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v8, 3LL, &Feature_EcoModeEnergySaver__private_descriptor);
  }
  dword_140F0A704 = dword_140E6748C;
  dword_140F0A708 = PopEsReason;
  dword_140F0A6E4 = *(_DWORD *)(a1 + 12);
  byte_140F0A6E8 = a2;
  xmmword_140F0A6F0 = *a3;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v7);
}
