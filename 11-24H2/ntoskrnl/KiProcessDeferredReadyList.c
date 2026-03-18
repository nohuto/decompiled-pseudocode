/*
 * XREFs of KiProcessDeferredReadyList @ 0x14031D3D0
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1402011F0 (KiSoftParkElectionDpcRoutine.c)
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeAdjustWobPriority @ 0x1402A2074 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeSetSchedulingGroupRankBias @ 0x14030ED08 (KeSetSchedulingGroupRankBias.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiSetLegacyAffinityThread @ 0x1403B178C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403B2A30 (KeSetUserGroupAffinityThread.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeUpdateThreadCpuSets @ 0x1403C6338 (KeUpdateThreadCpuSets.c)
 *     KeSetSelectedCpuSetsThread @ 0x1403C6670 (KeSetSelectedCpuSetsThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403C8A00 (KeCpuSetReportParkedProcessors.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1404183E4 (KiAbForceProcessLockEntry.c)
 *     KeSetDisableBoostProcess @ 0x140451D2C (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x140451E34 (KeSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     KeAdjustPriorityFloor @ 0x140474C2C (KeAdjustPriorityFloor.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14049E4B0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B4E30 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C6BDC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CEF10 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404D5000 (KiVpBackingThreadYieldExecution.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BFCA8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BFD04 (KeSetCpuSetsProcess.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405C2120 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140254CCC (KiSendSoftwareInterruptAffinity.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall KiProcessDeferredReadyList(struct _KPRCB *a1, _QWORD **a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  char v7; // bp
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rdi
  unsigned __int8 TargetType; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // rdx
  char Level; // r8
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int SingleTargetIndex; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+2Ch] [rbp-2Ch]

  v3 = *a2;
  v7 = 0;
  if ( *a2 )
  {
    *a2 = (_QWORD *)*v3;
    do
    {
      KiDeferredReadySingleThread(a1, v3 - 27, a2, 0LL);
      v3 = *a2;
      ++v7;
      if ( *a2 )
        *a2 = (_QWORD *)*v3;
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      if ( (v7 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
    }
    while ( v3 );
  }
  else
  {
    p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
  }
  TargetType = p_DeferredDispatchInterrupts->TargetType;
  if ( TargetType )
  {
    if ( TargetType == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = 31LL;
      Level = p_DeferredDispatchInterrupts->Level;
      SingleTargetIndex = p_DeferredDispatchInterrupts->SingleTargetIndex;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v14 = 6LL;
      v16 = 0LL;
      if ( Level != 1 )
        v12 = 47LL;
      HalpInterruptSendIpi(&v14, v12);
    }
    else
    {
      KiSendSoftwareInterruptAffinity(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count,
        p_DeferredDispatchInterrupts->Level);
    }
    if ( p_DeferredDispatchInterrupts->TargetType == 2 )
    {
      *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
      memset_0(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
        0,
        sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
    }
    p_DeferredDispatchInterrupts->TargetType = 0;
    p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
  }
  return KiCheckForThreadDispatch(a1, a3);
}
