/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140256160
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x140204140 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmUnlockProcessors @ 0x140205028 (PpmUnlockProcessors.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KeFlushQueuedDpcs @ 0x1402670A0 (KeFlushQueuedDpcs.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     KiCheckKeepAlive @ 0x14026B9B4 (KiCheckKeepAlive.c)
 *     PoExecuteIdleCheck @ 0x140274578 (PoExecuteIdleCheck.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140278DC0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140314F38 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     PpmParkSteerInterrupts @ 0x1403AE8E0 (PpmParkSteerInterrupts.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KiComputeHeteroConfig @ 0x1404283A8 (KiComputeHeteroConfig.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A973C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C9558 (PpmWakeClockOwnerIfNeeded.c)
 *     KiSendThawExecution @ 0x1404D91B0 (KiSendThawExecution.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055AFD4 (EmonReleaseProfileResourcesInternal.c)
 *     KiStartPrcbThread @ 0x1405B40DC (KiStartPrcbThread.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BD69C (KiSrcuReadUnlockRemote.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C0034 (KeGetAffinitizedInterruptsInfo.c)
 *     KiIpiTargetCall @ 0x1405C3DE0 (KiIpiTargetCall.c)
 *     PpmRemoveIdleStates @ 0x1405CAA00 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1405CAB84 (PpmTestAndLockProcessor.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405CAF20 (PpmUpdateProcessorIdleVeto.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     HalAllocateHardwareCounters @ 0x1406F1880 (HalAllocateHardwareCounters.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x14072EBAC (KiPrepareUpdateCoresHeteroMask.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     DefaultInitializeProfilingEnhanced @ 0x140B3CA48 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B3CB10 (DefaultInitializeProfilingOriginal.c)
 *     EmonInitializeProfilingEnhanced @ 0x140B3EED0 (EmonInitializeProfilingEnhanced.c)
 *     EmonInitializeProfilingOriginal @ 0x140B3F1E0 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B40EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B41488 (Amd64InitializeProfilingOriginal.c)
 *     KiUpdateProcessorCount @ 0x140B458D8 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B47620 (KiInitializeDynamicProcessorDpc.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KiInitializeTopologyStructures @ 0x140B49318 (KiInitializeTopologyStructures.c)
 *     KiInitializeIdleProcess @ 0x140C17620 (KiInitializeIdleProcess.c)
 *     KiIntSteerInit @ 0x140C18F78 (KiIntSteerInit.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C239E8 (PspCopyNodeRelativeMaskToAffinityEx.c)
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
