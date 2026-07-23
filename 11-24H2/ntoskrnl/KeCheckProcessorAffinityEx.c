/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x1403A4AD0
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmParkReportParkedCore @ 0x1402B0804 (PpmParkReportParkedCore.c)
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckKeepAlive @ 0x1403A49E4 (KiCheckKeepAlive.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 *     PpmParkReportSoftParkChange @ 0x1403D7120 (PpmParkReportSoftParkChange.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiProcessProfileList @ 0x140492AAC (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x140494D80 (KiStartProfileTarget.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558E90 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558FF0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B770 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B870 (EmonRemoveProfileSourceOriginal.c)
 *     Amd64EnableMonitoring @ 0x140568470 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140569A10 (Amd64RemoveProfileSource.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CB75C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405D7BEC (PpmParkReportForceParkChange.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     KiSetCacheInformationAmd @ 0x140B5B8F4 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulatedArchitecturalClasses @ 0x140C32E38 (PopReadLegacySimulatedArchitecturalClasses.c)
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
