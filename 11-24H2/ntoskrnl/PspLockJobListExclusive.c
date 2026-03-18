/*
 * XREFs of PspLockJobListExclusive @ 0x1408EAB00
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockJobListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (__int64)KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspJobListLock, result, (__int64)&PspJobListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
