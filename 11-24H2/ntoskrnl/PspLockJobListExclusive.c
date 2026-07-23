/*
 * XREFs of PspLockJobListExclusive @ 0x14085C330
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockJobListExclusive(__int64 a1)
{
  char *result; // rax
  char *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (char *)KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&PspJobListLock, result, (__int64)&PspJobListLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
