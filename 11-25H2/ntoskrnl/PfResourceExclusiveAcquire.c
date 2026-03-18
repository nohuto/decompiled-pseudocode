/*
 * XREFs of PfResourceExclusiveAcquire @ 0x1404A0210
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140826AA8 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140828764 (PfSnPrefetchCacheEntryUpdate.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PfResourceExclusiveAcquire(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
