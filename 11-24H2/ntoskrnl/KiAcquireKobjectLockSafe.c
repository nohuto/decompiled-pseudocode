/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1402C72D0
 * Callers:
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     ExpCheckForWorker @ 0x140261AEC (ExpCheckForWorker.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x1402C55A0 (KiInsertQueue.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     KiThawSingleThread @ 0x1402DD1F8 (KiThawSingleThread.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiFreezeSingleThread @ 0x1402DD7D8 (KiFreezeSingleThread.c)
 *     KiOutSwapProcesses @ 0x1402DDD00 (KiOutSwapProcesses.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KiInSwapProcesses @ 0x1402DE3B8 (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     KeTimeOutQueueWaiters @ 0x1402F1880 (KeTimeOutQueueWaiters.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403AC260 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403AD690 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14040F588 (KeDeleteMutant.c)
 *     KeRemoveQueueEntry @ 0x14041B3A0 (KeRemoveQueueEntry.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KeResumeThread @ 0x140455D98 (KeResumeThread.c)
 *     IopPassiveInterruptDpc @ 0x140456570 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x14045A460 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x1404793A8 (KiRundownMutants.c)
 *     KeSuspendThread @ 0x14047E25C (KeSuspendThread.c)
 *     KeQueryTimerDueTime @ 0x140488D50 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1404896BC (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x14048E740 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1404928E0 (KeRetryOutswapProcess.c)
 *     KeSetProcess @ 0x14049A2E8 (KeSetProcess.c)
 *     FsRtlpPostStackOverflow @ 0x14057F52C (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405AE464 (KeRegisterObjectDpc.c)
 *     KeInsertHeadQueue @ 0x1405BA850 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405BFB6C (KiAdjustThreadTimer.c)
 *     KeRundownPriQueue @ 0x1405C6B64 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E3280 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
