/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1409642D0
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A3B9D4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, a3, a4);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v8;
}
