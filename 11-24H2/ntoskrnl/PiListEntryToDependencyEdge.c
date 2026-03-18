/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1404F8618
 * Callers:
 *     PiEnumerateDependentListEntry @ 0x1406F996C (PiEnumerateDependentListEntry.c)
 *     IoDuplicateDependency @ 0x14071E100 (IoDuplicateDependency.c)
 *     PiEnumerateProviderListEntry @ 0x14071E364 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14071E600 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14071E8CC (PipMergeDependencyEdgeList.c)
 *     PipAttemptDependentsStart @ 0x14098EA5C (PipAttemptDependentsStart.c)
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140A0F1D8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A113DC (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
