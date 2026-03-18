/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140759A78
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08910 == 1 )
    BYTE9(xmmword_140F08920) = 0;
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
