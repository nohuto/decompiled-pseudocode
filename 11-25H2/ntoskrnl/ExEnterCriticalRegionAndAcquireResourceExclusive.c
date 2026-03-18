/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14028A9A0
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x140611D20 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
