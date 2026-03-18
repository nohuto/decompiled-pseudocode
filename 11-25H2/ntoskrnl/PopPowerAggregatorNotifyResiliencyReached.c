/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x14074D634
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08290 == 1 )
    BYTE9(xmmword_140F082A0) = 0;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
