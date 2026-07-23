/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140287740
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x1402DAC1C (KiAddProcessorToSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1403195B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 *     KiCheckKeepAlive @ 0x1403A49E4 (KiCheckKeepAlive.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     KiComputeHeteroConfig @ 0x14042B64C (KiComputeHeteroConfig.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A462C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C1C54 (PpmWakeClockOwnerIfNeeded.c)
 *     KiSendThawExecution @ 0x1404D1680 (KiSendThawExecution.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055B504 (EmonReleaseProfileResourcesInternal.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KiStartPrcbThread @ 0x1405B55AC (KiStartPrcbThread.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BECDC (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C16E4 (KeGetAffinitizedInterruptsInfo.c)
 *     KiIpiTargetCall @ 0x1405C5730 (KiIpiTargetCall.c)
 *     PpmRemoveIdleStates @ 0x1405CC7D0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CCCF0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405DE400 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E0D74 (PpmParkFindOverUtilizedProcessorsEx.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 *     HalAllocateHardwareCounters @ 0x1406FB2B0 (HalAllocateHardwareCounters.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140738D6C (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     DefaultInitializeProfilingEnhanced @ 0x140B4EA88 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B4EB50 (DefaultInitializeProfilingOriginal.c)
 *     EmonInitializeProfilingEnhanced @ 0x140B50F20 (EmonInitializeProfilingEnhanced.c)
 *     EmonInitializeProfilingOriginal @ 0x140B51230 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B52F18 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B534D8 (Amd64InitializeProfilingOriginal.c)
 *     KiUpdateProcessorCount @ 0x140B57928 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B59D00 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     KiInitializeTopologyStructures @ 0x140B5B318 (KiInitializeTopologyStructures.c)
 *     KiInitializeIdleProcess @ 0x140C2A7D0 (KiInitializeIdleProcess.c)
 *     KiIntSteerInit @ 0x140C2C194 (KiIntSteerInit.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx

  v3 = *((_DWORD *)KiGlobalState + a2) & 0x3F;
  result = *((_DWORD *)KiGlobalState + a2) >> 6;
  if ( *a1 > (unsigned int)result )
    goto LABEL_2;
  if ( a1[1] > (unsigned int)result )
  {
    *a1 = result + 1;
LABEL_2:
    v5 = *(_QWORD *)&a1[4 * result + 4];
    v6 = &a1[4 * result];
    result = v3;
    _bittestandset64(&v5, v3);
    *((_QWORD *)v6 + 1) = v5;
  }
  return result;
}
