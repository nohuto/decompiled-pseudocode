/*
 * XREFs of PopGetEnergyCounter @ 0x140A9BC20
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
  *a1 = xmmword_140F0B0C8;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
}
