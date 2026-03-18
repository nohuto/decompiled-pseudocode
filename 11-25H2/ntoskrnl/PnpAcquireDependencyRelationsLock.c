/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1408325D8
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140712130 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1407121C0 (IoSetDependency.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PnpDeleteAllDependencyRelations @ 0x140832574 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409A0C30 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
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
