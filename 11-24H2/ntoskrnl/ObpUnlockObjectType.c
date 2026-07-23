/*
 * XREFs of ObpUnlockObjectType @ 0x1409C64EC
 * Callers:
 *     ObUnRegisterCallbacks @ 0x140742860 (ObUnRegisterCallbacks.c)
 *     ObRegisterCallbacks @ 0x1409C5AA0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1409C5CD4 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x1409C6454 (ObpCreateTypeArray.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall ObpUnlockObjectType(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  struct _KTHREAD *result; // rax

  v1 = (volatile signed __int64 *)(a1 + 184);
  _m_prefetchw((const void *)(a1 + 184));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  result = KeGetCurrentThread();
  if ( result->SpecialApcDisable++ == -1 )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)&result->Header.Lock != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
