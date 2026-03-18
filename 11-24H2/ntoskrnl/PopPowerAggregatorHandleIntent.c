/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1409BC080
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A401F4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, a3, a4);
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  return v8;
}
