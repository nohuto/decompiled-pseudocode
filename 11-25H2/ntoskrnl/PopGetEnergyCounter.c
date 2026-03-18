/*
 * XREFs of PopGetEnergyCounter @ 0x140A96130
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  *a1 = xmmword_140F0AD28;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
}
