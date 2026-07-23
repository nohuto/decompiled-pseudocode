/*
 * XREFs of PiGetDependentList @ 0x1409BE2CC
 * Callers:
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *result; // rax

  if ( !a1 )
    return &PiDependencyNodeEmptyList;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  result = (__int64 *)(v1 + 32);
  if ( !v1 )
    return &PiDependencyNodeEmptyList;
  return result;
}
