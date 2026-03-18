/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403EF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 */

void __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(a1);
}
