/*
 * XREFs of KiProcessDeferredReadyList @ 0x140285EA0
 * Callers:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetDisableBoostProcess @ 0x140268ED0 (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x140268FD8 (KeSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14026BC00 (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x1402715DC (KiSetLegacyAffinityThread.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     KeAdjustWobPriority @ 0x140306698 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KiSoftParkElectionDpcRoutine @ 0x1403137E0 (KiSoftParkElectionDpcRoutine.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403E7D90 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 *     KeSetUserGroupAffinityThread @ 0x140469728 (KeSetUserGroupAffinityThread.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeAdjustPriorityFloor @ 0x140475A2C (KeAdjustPriorityFloor.c)
 *     KeSetSelectedCpuSetsThread @ 0x140491830 (KeSetSelectedCpuSetsThread.c)
 *     KeUpdateThreadCpuSets @ 0x140491BAC (KeUpdateThreadCpuSets.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B5390 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C641C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404F4D1C (KiVpBackingThreadYieldExecution.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BBD78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BE118 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
