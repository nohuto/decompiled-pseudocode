/*
 * XREFs of PopCurrentSystemPowerSourceState @ 0x14074EA10
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentSystemPowerSourceState(__int64 a1)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  *(_OWORD *)a1 = xmmword_140F0ACC0;
  *(_OWORD *)(a1 + 16) = xmmword_140F0ACD0;
  *(_OWORD *)(a1 + 32) = xmmword_140F0ACE0;
  *(_OWORD *)(a1 + 48) = xmmword_140F0ACF0;
  *(_DWORD *)(a1 + 64) = dword_140F0AD00;
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
}
