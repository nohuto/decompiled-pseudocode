/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1409DE970
 * Callers:
 *     ExpWorkerFactoryFinishDeferredWork @ 0x1402A41B0 (ExpWorkerFactoryFinishDeferredWork.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

__int64 __fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return KeLeaveCriticalRegionThread();
}
