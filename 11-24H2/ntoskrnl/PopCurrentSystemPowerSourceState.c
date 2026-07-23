/*
 * XREFs of PopCurrentSystemPowerSourceState @ 0x140759D4C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopCurrentSystemPowerSourceState(__int64 a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  *(_OWORD *)a1 = xmmword_140F0BEA0;
  *(_OWORD *)(a1 + 16) = xmmword_140F0BEB0;
  *(_OWORD *)(a1 + 32) = xmmword_140F0BEC0;
  *(_OWORD *)(a1 + 48) = xmmword_140F0BED0;
  *(_DWORD *)(a1 + 64) = dword_140F0BEE0;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
}
