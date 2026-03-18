/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140257130
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x140204EA0 (KeFlushQueuedDpcs.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     PoExecuteIdleCheck @ 0x14029D050 (PoExecuteIdleCheck.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x14030BBBC (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     PpmParkSteerInterrupts @ 0x140352C70 (PpmParkSteerInterrupts.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmUnlockProcessors @ 0x1403B66C4 (PpmUnlockProcessors.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     KiStopProfileTarget @ 0x1403C8500 (KiStopProfileTarget.c)
 *     KiCheckKeepAlive @ 0x1403C9E44 (KiCheckKeepAlive.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403CA530 (PpmUpdatePlatformIdleVeto.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     KiComputeHeteroConfig @ 0x140438A8C (KiComputeHeteroConfig.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404AA430 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C8608 (PpmWakeClockOwnerIfNeeded.c)
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 *     PpmIdleSelectStates @ 0x1404EA518 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055D8D4 (EmonReleaseProfileResourcesInternal.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     KiStartPrcbThread @ 0x1405B7FCC (KiStartPrcbThread.c)
 *     KiSrcuReadUnlockRemote @ 0x1405C170C (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C40C0 (KeGetAffinitizedInterruptsInfo.c)
 *     KiIpiTargetCall @ 0x1405C8000 (KiIpiTargetCall.c)
 *     PpmRemoveIdleStates @ 0x1405CF0B0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1405CF234 (PpmTestAndLockProcessor.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CF5D0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405E0DE0 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E337C (PpmParkDistributeUtilityEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E37EC (PpmParkFindOverUtilizedProcessorsEx.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 *     HalAllocateHardwareCounters @ 0x1406FD670 (HalAllocateHardwareCounters.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14073AE3C (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     DefaultInitializeProfilingEnhanced @ 0x140B4CA48 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B4CB10 (DefaultInitializeProfilingOriginal.c)
 *     EmonInitializeProfilingEnhanced @ 0x140B4EED0 (EmonInitializeProfilingEnhanced.c)
 *     EmonInitializeProfilingOriginal @ 0x140B4F1E0 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B50EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B51488 (Amd64InitializeProfilingOriginal.c)
 *     KiUpdateProcessorCount @ 0x140B558D8 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B57C80 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     KiInitializeTopologyStructures @ 0x140B59298 (KiInitializeTopologyStructures.c)
 *     KiInitializeIdleProcess @ 0x140C28730 (KiInitializeIdleProcess.c)
 *     KiIntSteerInit @ 0x140C2A074 (KiIntSteerInit.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C34CB4 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
