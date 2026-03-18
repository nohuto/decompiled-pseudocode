/*
 * XREFs of PipDereferenceDependencyNode @ 0x140AB54A0
 * Callers:
 *     IoResolveDependency @ 0x1404B9270 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1404CD984 (PipFreeDependencyEdge.c)
 *     IoDuplicateDependency @ 0x14071E100 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14071E8CC (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14071EA38 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14071EAA4 (PipSetDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140AB5450 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1406F55EC (PipDeleteDependencyNode.c)
 */

void __fastcall PipDereferenceDependencyNode(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
    PipDeleteDependencyNode((_QWORD *)a1);
}
