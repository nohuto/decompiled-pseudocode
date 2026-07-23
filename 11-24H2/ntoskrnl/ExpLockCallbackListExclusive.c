/*
 * XREFs of ExpLockCallbackListExclusive @ 0x1404C6590
 * Callers:
 *     ExpDeleteCallback @ 0x1407BB6D0 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall ExpLockCallbackListExclusive(__int64 a1)
{
  char *result; // rax
  char *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (char *)KeAbPreAcquire((__int64)&ExpCallbackListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, result, (__int64)&ExpCallbackListLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
