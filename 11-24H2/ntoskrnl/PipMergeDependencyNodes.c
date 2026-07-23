/*
 * XREFs of PipMergeDependencyNodes @ 0x14071C5C8
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x1405A164C (PipMoveListEntries.c)
 *     PipMergeDependencyEdgeList @ 0x14071C45C (PipMergeDependencyEdgeList.c)
 *     PipDereferenceDependencyNode @ 0x140AAF930 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipMergeDependencyNodes(__int64 a1, __int64 a2)
{
  ++*(_DWORD *)(a1 + 88);
  ++*(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) |= *(_DWORD *)(a2 + 92);
  PipMoveListEntries((_QWORD *)(a1 + 56), a2 + 56);
  PipMergeDependencyEdgeList(a1, a2, 0LL);
  PipMergeDependencyEdgeList(a1, a2, 1LL);
  PipDereferenceDependencyNode(a1);
  return PipDereferenceDependencyNode(a2);
}
