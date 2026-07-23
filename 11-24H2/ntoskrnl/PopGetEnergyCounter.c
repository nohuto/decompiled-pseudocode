/*
 * XREFs of PopGetEnergyCounter @ 0x140A97190
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  *a1 = xmmword_140F0BF08;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
}
