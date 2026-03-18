/*
 * XREFs of PspLockThreadSecurityExclusive @ 0x140431AF0
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 1424);
  result = (__int64)KeAbPreAcquire(a1 + 1424, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
