/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x1404AE8BC
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x14074F810 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140757C90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9287C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A98D3C (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6F3A8 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
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
    v0 = qword_140F0D3D8;
    _InterlockedIncrement((volatile signed __int32 *)(qword_140F0D3D8 + 16));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
