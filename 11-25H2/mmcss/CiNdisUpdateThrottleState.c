/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000E490
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x1C000E2D0 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000E330 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     <none>
 */

void CiNdisUpdateThrottleState()
{
  if ( CiNdisDeviceHandle )
  {
    if ( !CiNdisThrottleInProgress )
    {
      CiNdisThrottleInProgress = 1;
      IoQueueWorkItem(CiNdisThrottleWorkItem, CiNdisThrottle, NormalWorkQueue, 0LL);
    }
  }
}
