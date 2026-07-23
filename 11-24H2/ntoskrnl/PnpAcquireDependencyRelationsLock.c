/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1409BD598
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14071BDC0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14071BE50 (IoSetDependency.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x1409BD534 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409BF0A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
