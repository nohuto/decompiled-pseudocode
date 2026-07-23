/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409BD5E8
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1409BD534 (PnpDeleteAllDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409BDF84 (PipAddtoRebuildPowerRelationsQueue.c)
 */

void __fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    v2 = (__int64 *)(v1 + 32);
  else
    v2 = &PiDependencyNodeEmptyList;
  v3 = (__int64 *)*v2;
  while ( v3 != v2 )
  {
    v4 = PiListEntryToDependencyEdge((__int64)v3, 1);
    v3 = (__int64 *)*v3;
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 48LL);
    if ( v5 )
      PipAddtoRebuildPowerRelationsQueue(v5);
  }
}
