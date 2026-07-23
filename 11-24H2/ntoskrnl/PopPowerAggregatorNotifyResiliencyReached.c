/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140757ED4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08C70 == 1 )
    BYTE9(xmmword_140F08C80) = 0;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
