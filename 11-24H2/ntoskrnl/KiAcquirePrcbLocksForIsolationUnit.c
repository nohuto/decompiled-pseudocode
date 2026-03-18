/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x140293190
 * Callers:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiIdleSchedule @ 0x140296C40 (KiIdleSchedule.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiAttemptToStealStandbyThread @ 0x140297D94 (KiAttemptToStealStandbyThread.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KeSetSchedulingGroupRankBias @ 0x14030ED08 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14030EF28 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140310BD8 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeTransitionProcessorParkState @ 0x1403E9560 (KeTransitionProcessorParkState.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x140472120 (KeUpdateThreadTag.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     KeTryToFreezeThreadStack @ 0x1404AB95C (KeTryToFreezeThreadStack.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1404CC7A8 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiChooseTargetProcessor @ 0x1404E7710 (KiChooseTargetProcessor.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E9D80 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 *     KeTraceParkingRundown @ 0x1405C8144 (KeTraceParkingRundown.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405C8540 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405C85C0 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

_BYTE *__fastcall KiAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, unsigned __int64 *a3)
{
  _BYTE *result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  result = (_BYTE *)a2;
  *a3 = a2 ^ (a1 ^ a2) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    result = *(_BYTE **)(a1 + 36440);
    v4 = (unsigned __int8)*result;
    v5 = (__int64 *)(result + 8);
    if ( !*result )
      return result;
  }
  else
  {
    v5 = &v9;
    v4 = 1LL;
  }
  v6 = (unsigned int)v4;
  do
  {
    v7 = *v5;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v4) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
        result = *(_BYTE **)(v7 + 48);
      }
      while ( result );
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
