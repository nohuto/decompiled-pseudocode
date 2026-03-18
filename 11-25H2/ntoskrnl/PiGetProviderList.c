/*
 * XREFs of PiGetProviderList @ 0x1408319BC
 * Callers:
 *     IopCheckIfMergeRequired @ 0x140830E20 (IopCheckIfMergeRequired.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x140A87850 (PiQueryPowerDependencyRelations.c)
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
