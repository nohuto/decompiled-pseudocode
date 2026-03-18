/*
 * XREFs of ObpLockObjectTypeExclusive @ 0x1409D6734
 * Callers:
 *     ObUnRegisterCallbacks @ 0x140744570 (ObUnRegisterCallbacks.c)
 *     ObpFreeObject @ 0x1408469C0 (ObpFreeObject.c)
 *     ObRegisterCallbacks @ 0x1409D5C70 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1409D5EA4 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x1409D6624 (ObpCreateTypeArray.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ObpLockObjectTypeExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 184);
  --CurrentThread->SpecialApcDisable;
  result = (__int64)KeAbPreAcquire(a1 + 184, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
