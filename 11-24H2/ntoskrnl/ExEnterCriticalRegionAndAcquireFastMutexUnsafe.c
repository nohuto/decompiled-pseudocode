/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403DB100
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 */

void __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(a1);
}
