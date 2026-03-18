/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x14026BAA0
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x140204140 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     PpmExitCoordinatedIdle @ 0x14026A9B8 (PpmExitCoordinatedIdle.c)
 *     KiCheckKeepAlive @ 0x14026B9B4 (KiCheckKeepAlive.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiForwardTick @ 0x140274A70 (KiForwardTick.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmParkReportParkedCore @ 0x1403B0AB8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403DFE2C (PpmParkReportSoftParkChange.c)
 *     KiProcessProfileList @ 0x14049859C (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x14049A3B0 (KiStartProfileTarget.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558960 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558AC0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B240 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B340 (EmonRemoveProfileSourceOriginal.c)
 *     Amd64EnableMonitoring @ 0x140567CE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140569280 (Amd64RemoveProfileSource.c)
 *     KiGetNextClockOwner @ 0x1405B63C8 (KiGetNextClockOwner.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B7D10 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405C998C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405CAB84 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405D5E54 (PpmParkReportForceParkChange.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     KiSetCacheInformationAmd @ 0x140B49850 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C1FC18 (PopReadLegacySimulatedArchitecturalClasses.c)
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
