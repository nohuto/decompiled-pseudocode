/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x14031E740
 * Callers:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiDecrementProcessStackCount @ 0x1402699D0 (KiDecrementProcessStackCount.c)
 *     KiThawSingleThread @ 0x140296388 (KiThawSingleThread.c)
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402A40EC (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402A5864 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A61D0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1402A67C4 (KiInSwapSingleProcess.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseHeaderMutex @ 0x14031E170 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     ExQueueWorkItemFromIo @ 0x140323D10 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x140338374 (KiInswapAndReadyThread.c)
 *     KiInSwapProcesses @ 0x1403389A4 (KiInSwapProcesses.c)
 *     KiSuspendThread @ 0x140338B00 (KiSuspendThread.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KeInsertQueue @ 0x1403BCC20 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403BCD90 (IopPassiveInterruptDpc.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403BEA00 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 *     ExpCheckForWorker @ 0x1403D3B6C (ExpCheckForWorker.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1403D7DA0 (KeTimeOutQueueWaiters.c)
 *     ExpCommitWakeFastResource @ 0x1403D8410 (ExpCommitWakeFastResource.c)
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     KeRundownQueueEx @ 0x14041B7C8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14041BA48 (KeDeleteMutant.c)
 *     KeRemoveQueueEntry @ 0x140428720 (KeRemoveQueueEntry.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiOutSwapProcesses @ 0x14042D320 (KiOutSwapProcesses.c)
 *     KeResumeThread @ 0x140460900 (KeResumeThread.c)
 *     KiFreezeSingleThread @ 0x1404635BC (KiFreezeSingleThread.c)
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x14047E1B8 (KiRundownMutants.c)
 *     KeSuspendThread @ 0x140483128 (KeSuspendThread.c)
 *     KeQueryTimerDueTime @ 0x14048E920 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14048F4AC (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x140493CB4 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x140497DD0 (KeRetryOutswapProcess.c)
 *     KeSetProcess @ 0x14049F4A0 (KeSetProcess.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405B14F4 (KeRegisterObjectDpc.c)
 *     KeInsertHeadQueue @ 0x1405BD220 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405C259C (KiAdjustThreadTimer.c)
 *     KeRundownPriQueue @ 0x1405C9434 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E5CE0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
