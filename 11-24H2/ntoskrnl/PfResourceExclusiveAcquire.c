/*
 * XREFs of PfResourceExclusiveAcquire @ 0x14049EF58
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140962F24 (PfSnPrefetchCacheEntryUpdate.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PfResourceExclusiveAcquire(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
