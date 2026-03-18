/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x140AB0460
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140832994 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PipDereferenceDependencyNode @ 0x140AB04B0 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipUnlinkDeviceObjectAndDependencyNode(_QWORD *a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 72) != a2 + 72 )
    ObfDereferenceObjectWithTag(a1, 0x44706E50u);
  *(_QWORD *)(a1[39] + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return PipDereferenceDependencyNode(a2);
}
