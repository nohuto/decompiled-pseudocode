/*
 * XREFs of HalpIommuUpdateRemappingDestination @ 0x140B3D9A0
 * Callers:
 *     HalpUpdateIrtDestinationId @ 0x1405535AC (HalpUpdateIrtDestinationId.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIommuUpdateRemappingDestination()
{
  __int64 result; // rax
  ULONG_PTR *v1; // rbx
  ULONG_PTR *v2; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = (ULONG_PTR *)HalpIommuList;
  while ( v1 != &HalpIommuList )
  {
    v2 = v1;
    v1 = (ULONG_PTR *)*v1;
    result = *((unsigned int *)v2 + 118);
    if ( (result & 0x40) != 0 )
      result = guard_dispatch_icall_no_overrides(v2[2]);
  }
  return result;
}
