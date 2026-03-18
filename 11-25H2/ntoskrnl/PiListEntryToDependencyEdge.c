/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1404F5E64
 * Callers:
 *     PiEnumerateDependentListEntry @ 0x1406EDC90 (PiEnumerateDependentListEntry.c)
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     PiEnumerateProviderListEntry @ 0x140712264 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140712500 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1407127CC (PipMergeDependencyEdgeList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14083281C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140832994 (PipDeleteAllDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A753D0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     PipAttemptDependentsStart @ 0x140A80F40 (PipAttemptDependentsStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
