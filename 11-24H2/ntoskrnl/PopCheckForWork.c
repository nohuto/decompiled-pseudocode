/*
 * XREFs of PopCheckForWork @ 0x1403F2D8C
 * Callers:
 *     PopCheckForIdleness @ 0x1403F1700 (PopCheckForIdleness.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1403F1D50 (PoRegisterDeviceForIdleDetection.c)
 *     PopUserPresentSet @ 0x1403F2C70 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1403F2D58 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405D2F54 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405D2FC0 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void PopCheckForWork()
{
  KIRQL v0; // bl

  if ( (PopWorkerStatus & PopWorkerPending) != 0 && (struct _KTHREAD *)PopPolicyLockThread != KeGetCurrentThread() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    if ( PopWorkerStatus < 0 )
    {
      PopWorkerStatus &= ~0x80000000;
      ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&PopWorkerSpinLock, v0);
  }
}
