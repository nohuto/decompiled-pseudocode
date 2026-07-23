/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1404F5EF8
 * Callers:
 *     PiEnumerateDependentListEntry @ 0x1406F75AC (PiEnumerateDependentListEntry.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PiEnumerateProviderListEntry @ 0x14071BEF4 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14071C190 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14071C45C (PipMergeDependencyEdgeList.c)
 *     PipAttemptDependentsStart @ 0x140979A94 (PipAttemptDependentsStart.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409BD5E8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409BD760 (PipDeleteAllDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
