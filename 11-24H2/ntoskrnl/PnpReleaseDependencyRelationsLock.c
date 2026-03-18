/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x140A0F814
 * Callers:
 *     IoResolveDependency @ 0x1404B9270 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071E100 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14071E230 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14071E2C0 (IoSetDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409906E4 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x140A0F124 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x140A0F630 (IopSortRelationListForRemove.c)
 *     PnpCheckForActiveDependencies @ 0x140A0F7A4 (PnpCheckForActiveDependencies.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A10C98 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PnpProcessDependencyRelations @ 0x140A1123C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
