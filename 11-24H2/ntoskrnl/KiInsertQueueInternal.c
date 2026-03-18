/*
 * XREFs of KiInsertQueueInternal @ 0x140323B94
 * Callers:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x14031E170 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1403BE270 (KiWakeOtherQueueWaiters.c)
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x1403D8410 (ExpCommitWakeFastResource.c)
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     MiReturnWsToExpansionList @ 0x1403D9400 (MiReturnWsToExpansionList.c)
 *     KeRundownQueueCommon @ 0x14041B8B8 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14041BA48 (KeDeleteMutant.c)
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x14047E1B8 (KiRundownMutants.c)
 *     KeSetProcess @ 0x14049F4A0 (KeSetProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeQueueWaiter @ 0x140324B20 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1403BE270 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403BE4C8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403BE4F4 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
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
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
