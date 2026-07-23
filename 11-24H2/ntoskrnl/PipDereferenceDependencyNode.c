/*
 * XREFs of PipDereferenceDependencyNode @ 0x140AAF930
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1404C6D54 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14071C45C (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14071C5C8 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409BD760 (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140AAF8E0 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1406F35EC (PipDeleteDependencyNode.c)
 */

void __fastcall PipDereferenceDependencyNode(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
    PipDeleteDependencyNode((_QWORD *)a1);
}
