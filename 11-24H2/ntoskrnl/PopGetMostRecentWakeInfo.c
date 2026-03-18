/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x1404B409C
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x1407514F0 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407597F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9604C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A9D7CC (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6DB08 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
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
    v0 = qword_140F0D0B8;
    _InterlockedIncrement((volatile signed __int32 *)(qword_140F0D0B8 + 16));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
