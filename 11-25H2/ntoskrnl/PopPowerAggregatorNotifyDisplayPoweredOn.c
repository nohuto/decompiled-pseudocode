/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406EBB20
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
 */

__int64 PopPowerAggregatorNotifyDisplayPoweredOn()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F082B8 == 2 )
  {
    LOBYTE(xmmword_140F082C8) = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
