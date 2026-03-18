/*
 * XREFs of PiGetProviderList @ 0x140A0FB40
 * Callers:
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x140A0EBBC (IopCheckIfMergeRequired.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     IopSortRelationListForRemove @ 0x140A0F630 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
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
