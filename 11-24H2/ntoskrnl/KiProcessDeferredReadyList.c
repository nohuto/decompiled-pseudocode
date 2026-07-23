/*
 * XREFs of KiProcessDeferredReadyList @ 0x1402C5F60
 * Callers:
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeAdjustWobPriority @ 0x1402D17A4 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiSoftParkElectionDpcRoutine @ 0x1403298E0 (KiSoftParkElectionDpcRoutine.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiSetLegacyAffinityThread @ 0x14039FF9C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403A35A0 (KeCpuSetReportParkedProcessors.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 *     KeSetDisableBoostProcess @ 0x140446DDC (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x140446EE4 (KeSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 *     KeAdjustPriorityFloor @ 0x140470A3C (KeAdjustPriorityFloor.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetSelectedCpuSetsThread @ 0x14048B570 (KeSetSelectedCpuSetsThread.c)
 *     KeUpdateThreadCpuSets @ 0x14048B8EC (KeUpdateThreadCpuSets.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1404992B0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C003C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404CE2D8 (KiVpBackingThreadYieldExecution.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BD2D8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BF6F0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x1402852DC (KiSendSoftwareInterruptAffinity.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
