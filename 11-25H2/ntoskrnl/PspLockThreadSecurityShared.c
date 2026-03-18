/*
 * XREFs of PspLockThreadSecurityShared @ 0x140429710
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1424);
  v3 = KeAbPreAcquire(a1 + 1424, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
