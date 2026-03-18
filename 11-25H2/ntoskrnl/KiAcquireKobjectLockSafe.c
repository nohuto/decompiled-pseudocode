/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140287200
 * Callers:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KiDecrementProcessStackCount @ 0x140228DE0 (KiDecrementProcessStackCount.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A1650 (KiActivateWaiterQueueWithThreadLock.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     KiInSwapProcesses @ 0x1402F1450 (KiInSwapProcesses.c)
 *     KiSuspendThread @ 0x1402F15AC (KiSuspendThread.c)
 *     KiOutSwapProcesses @ 0x1402F1A54 (KiOutSwapProcesses.c)
 *     KiFreezeSingleThread @ 0x1402F20B4 (KiFreezeSingleThread.c)
 *     KiThawSingleThread @ 0x1402F2184 (KiThawSingleThread.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     KiInSwapSingleProcess @ 0x1402F28E4 (KiInSwapSingleProcess.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140303BD0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeRegisterObjectNotification @ 0x140306594 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403082D4 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     ExpCheckForWorker @ 0x1403BD890 (ExpCheckForWorker.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KeRundownQueueEx @ 0x14041E338 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041EA58 (KeDeleteMutant.c)
 *     KeRemoveQueueEntry @ 0x14042ED80 (KeRemoveQueueEntry.c)
 *     KeTimeOutQueueWaiters @ 0x14043F744 (KeTimeOutQueueWaiters.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeResumeThread @ 0x14046230C (KeResumeThread.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x14047E8DC (KiRundownMutants.c)
 *     KeSuspendThread @ 0x1404875A0 (KeSuspendThread.c)
 *     KeQueryTimerDueTime @ 0x14048EAC4 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14048FB8C (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x140494D80 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1404983B0 (KeRetryOutswapProcess.c)
 *     KeSetProcess @ 0x1404A8088 (KeSetProcess.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405ADB64 (KeRegisterObjectDpc.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405BE4BC (KiAdjustThreadTimer.c)
 *     KeRundownPriQueue @ 0x1405C4E08 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405D9B10 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
