/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x1403C9F30
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     PpmParkReportParkedCore @ 0x1403519DC (PpmParkReportParkedCore.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403B21E0 (KiRescheduleThreadAfterAffinityChange.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmExitCoordinatedIdle @ 0x1403B6A20 (PpmExitCoordinatedIdle.c)
 *     KiStopProfileTarget @ 0x1403C8500 (KiStopProfileTarget.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckKeepAlive @ 0x1403C9E44 (KiCheckKeepAlive.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403CA530 (PpmUpdatePlatformIdleVeto.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmParkReportSoftParkChange @ 0x1403E9474 (PpmParkReportSoftParkChange.c)
 *     KiProcessProfileList @ 0x1404980CC (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x14049A320 (KiStartProfileTarget.c)
 *     EmonEnableMonitoringEnhanced @ 0x14055B260 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x14055B3C0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055DB40 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055DC40 (EmonRemoveProfileSourceOriginal.c)
 *     Amd64EnableMonitoring @ 0x14056AFE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14056C580 (Amd64RemoveProfileSource.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KiGetNextClockOwner @ 0x1405BA1EC (KiGetNextClockOwner.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405BBBB0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CE03C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405CF234 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405DA8CC (PpmParkReportForceParkChange.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     KiSetCacheInformationAmd @ 0x140B59874 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C30D18 (PopReadLegacySimulatedArchitecturalClasses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = *((_DWORD *)KiGlobalState + a2);
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> (v3 & 0x3F)) & 1LL;
}
