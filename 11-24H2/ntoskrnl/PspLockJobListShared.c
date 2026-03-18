/*
 * XREFs of PspLockJobListShared @ 0x1409FBF04
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobListShared(__int64 a1)
{
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((__int64)&PspJobListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspJobListLock, 0, v1, (__int64)&PspJobListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
