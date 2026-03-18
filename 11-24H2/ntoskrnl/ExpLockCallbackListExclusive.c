/*
 * XREFs of ExpLockCallbackListExclusive @ 0x1404CD1C0
 * Callers:
 *     ExpDeleteCallback @ 0x1407BB280 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpLockCallbackListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (__int64)KeAbPreAcquire((__int64)&ExpCallbackListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, result, (__int64)&ExpCallbackListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
