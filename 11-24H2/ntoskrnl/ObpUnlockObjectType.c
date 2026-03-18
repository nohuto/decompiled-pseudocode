/*
 * XREFs of ObpUnlockObjectType @ 0x1409D66BC
 * Callers:
 *     ObUnRegisterCallbacks @ 0x140744570 (ObUnRegisterCallbacks.c)
 *     ObRegisterCallbacks @ 0x1409D5C70 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1409D5EA4 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x1409D6624 (ObpCreateTypeArray.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall ObpUnlockObjectType(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
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
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery(v5, v4);
  }
  return result;
}
