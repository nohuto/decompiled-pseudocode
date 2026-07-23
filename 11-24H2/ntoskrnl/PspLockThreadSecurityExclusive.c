/*
 * XREFs of PspLockThreadSecurityExclusive @ 0x140424030
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 1424);
  result = (char *)KeAbPreAcquire(a1 + 1424, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
