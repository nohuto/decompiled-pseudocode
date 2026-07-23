/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F5384
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409A0BFC (PopPowerAggregatorScheduleWorker.c)
 */

__int64 PopPowerAggregatorNotifyDisplayPoweredOn()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08C98 == 2 )
  {
    LOBYTE(xmmword_140F08CA8) = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
