/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x1404B478C
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x140745420 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14074D510 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A91E9C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A97C9C (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopIsMostRecentWakeAttended @ 0x140B5EA58 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

__int64 PopGetMostRecentWakeInfo()
{
  __int64 v0; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( PopWakeInfoCount )
  {
    v0 = qword_140F0CA28;
    _InterlockedIncrement((volatile signed __int32 *)(qword_140F0CA28 + 16));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
