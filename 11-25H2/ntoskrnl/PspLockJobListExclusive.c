/*
 * XREFs of PspLockJobListExclusive @ 0x1408DB848
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall PspLockJobListExclusive(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&PspJobListLock, result, (__int64)&PspJobListLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
