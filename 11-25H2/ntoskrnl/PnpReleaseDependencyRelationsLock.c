/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x140832A80
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140712130 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1407121C0 (IoSetDependency.c)
 *     PnpProcessDependencyRelations @ 0x14082F9A8 (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14083216C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x140832574 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409A0C30 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x140A87850 (PiQueryPowerDependencyRelations.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
