/*
 * XREFs of ObpLockObjectTypeExclusive @ 0x1409D85A4
 * Callers:
 *     ObUnRegisterCallbacks @ 0x140738550 (ObUnRegisterCallbacks.c)
 *     ObpFreeObject @ 0x14084AD10 (ObpFreeObject.c)
 *     ObRegisterCallbacks @ 0x1409D7AE0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1409D7D14 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x1409D8494 (ObpCreateTypeArray.c)
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 *     ExpWorkerInitialization @ 0x140C31C34 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall ObpLockObjectTypeExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 184);
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire(a1 + 184, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
