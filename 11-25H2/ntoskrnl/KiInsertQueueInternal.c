/*
 * XREFs of KiInsertQueueInternal @ 0x14027F170
 * Callers:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     NtAssociateWaitCompletionPacket @ 0x14027F510 (NtAssociateWaitCompletionPacket.c)
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     KeRegisterObjectNotification @ 0x140306594 (KeRegisterObjectNotification.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     KeRundownQueueCommon @ 0x14041E8C4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14041EA58 (KeDeleteMutant.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     KeSetProcess @ 0x1404A8088 (KeSetProcess.c)
 * Callees:
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140308B20 (KiWakeQueueWaiter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbp
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r14
  unsigned int v8; // esi
  __int64 result; // rax
  int v10; // edx
  __int64 **v11; // rcx
  __int64 v12; // r8

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v12) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v12);
  }
  v8 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( (_QWORD *)*v2 == v2
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (result = KiWakeQueueWaiter(CurrentPrcb, a1, a2), !(_BYTE)result) )
  {
    v10 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v10 + 1;
    result = a1 + 24;
    v11 = *(__int64 ***)(a1 + 32);
    if ( *v11 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *a2 = result;
    a2[1] = (__int64)v11;
    *v11 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v10 && (_QWORD *)*v2 != v2 )
      result = KiWakeOtherQueueWaiters(CurrentPrcb, a1);
  }
  else
  {
    *a2 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
