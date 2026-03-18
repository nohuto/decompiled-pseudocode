/*
 * XREFs of ExpLockCallbackListShared @ 0x1404A6BCC
 * Callers:
 *     ExpGetNextCallback @ 0x140A5DDB0 (ExpGetNextCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall ExpLockCallbackListShared(__int64 a1)
{
  __int64 *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((__int64)&ExpCallbackListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&ExpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&ExpCallbackListLock,
               0,
               v1,
               (unsigned __int64)&ExpCallbackListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
