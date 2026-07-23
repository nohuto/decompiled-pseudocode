/*
 * XREFs of PspLockJobListShared @ 0x1409F4C44
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobListShared(__int64 a1)
{
  char *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = (char *)KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspJobListLock, 0, v1, (__int64)&PspJobListLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
