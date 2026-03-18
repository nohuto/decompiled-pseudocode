/*
 * XREFs of PopCurrentSystemPowerSourceState @ 0x14075B270
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentSystemPowerSourceState(__int64 a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
  *(_OWORD *)a1 = xmmword_140F0B060;
  *(_OWORD *)(a1 + 16) = xmmword_140F0B070;
  *(_OWORD *)(a1 + 32) = xmmword_140F0B080;
  *(_OWORD *)(a1 + 48) = xmmword_140F0B090;
  *(_DWORD *)(a1 + 64) = dword_140F0B0A0;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
}
