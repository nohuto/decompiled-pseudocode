/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x140AB5450
 * Callers:
 *     IoResolveDependency @ 0x1404B9270 (IoResolveDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PipDereferenceDependencyNode @ 0x140AB54A0 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipUnlinkDeviceObjectAndDependencyNode(_QWORD *a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 72) != a2 + 72 )
    ObfDereferenceObjectWithTag(a1, 0x44706E50u);
  *(_QWORD *)(a1[39] + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return PipDereferenceDependencyNode(a2);
}
