/*
 * XREFs of CiNdisUpdateThrottleState @ 0x14000FA20
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x14000F860 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x14000F8C0 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     Feature_3448537402__private_IsEnabledDeviceUsageNoInline @ 0x140004E58 (Feature_3448537402__private_IsEnabledDeviceUsageNoInline.c)
 */

void CiNdisUpdateThrottleState()
{
  bool v0; // zf

  if ( (unsigned int)Feature_3448537402__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !CiNdisDeviceHandle )
      return;
    v0 = CiNdisThrottleInProgress == 0;
  }
  else
  {
    if ( !CiNdisDeviceHandle )
      return;
    v0 = CiNdisThrottleInProgress == 0;
  }
  if ( v0 )
  {
    CiNdisThrottleInProgress = 1;
    IoQueueWorkItem(CiNdisThrottleWorkItem, CiNdisThrottle, NormalWorkQueue, 0LL);
  }
}
