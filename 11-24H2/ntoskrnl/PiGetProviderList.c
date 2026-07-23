/*
 * XREFs of PiGetProviderList @ 0x1409BDF50
 * Callers:
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1409BCFC0 (IopCheckIfMergeRequired.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     IopSortRelationListForRemove @ 0x1409BDA40 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *result; // rax

  if ( !a1 )
    return &PiDependencyNodeEmptyList;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  result = (__int64 *)(v1 + 16);
  if ( !v1 )
    return &PiDependencyNodeEmptyList;
  return result;
}
