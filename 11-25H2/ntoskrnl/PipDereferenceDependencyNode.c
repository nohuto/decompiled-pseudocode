/*
 * XREFs of PipDereferenceDependencyNode @ 0x140AB04B0
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1404CDBA4 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x1407127CC (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x140712938 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x1407129A4 (PipSetDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140832994 (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140AB0460 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1406E9BF8 (PipDeleteDependencyNode.c)
 */

void __fastcall PipDereferenceDependencyNode(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
    PipDeleteDependencyNode((_QWORD *)a1);
}
