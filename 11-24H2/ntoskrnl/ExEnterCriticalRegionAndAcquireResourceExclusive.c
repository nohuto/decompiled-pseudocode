/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140276980
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x14061DCE0 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
