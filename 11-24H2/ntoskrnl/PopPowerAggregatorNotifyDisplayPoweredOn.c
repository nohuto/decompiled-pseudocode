/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F7384
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409BA5AC (PopPowerAggregatorScheduleWorker.c)
 */

__int64 PopPowerAggregatorNotifyDisplayPoweredOn()
{
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08938 == 2 )
  {
    LOBYTE(xmmword_140F08948) = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
