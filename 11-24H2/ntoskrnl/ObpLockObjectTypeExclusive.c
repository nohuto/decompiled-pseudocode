/*
 * XREFs of ObpLockObjectTypeExclusive @ 0x1409C6564
 * Callers:
 *     ObUnRegisterCallbacks @ 0x140742860 (ObUnRegisterCallbacks.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     ObRegisterCallbacks @ 0x1409C5AA0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1409C5CD4 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x1409C6454 (ObpCreateTypeArray.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall ObpLockObjectTypeExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 184);
  --CurrentThread->SpecialApcDisable;
  result = (char *)KeAbPreAcquire(a1 + 184, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
