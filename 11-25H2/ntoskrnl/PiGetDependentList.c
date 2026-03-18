/*
 * XREFs of PiGetDependentList @ 0x140830B54
 * Callers:
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     PnpProcessDependencyRelations @ 0x14082F9A8 (PnpProcessDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
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
