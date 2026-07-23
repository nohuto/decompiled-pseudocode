/*
 * XREFs of HalpIommuUpdateRemappingDestination @ 0x140B4F9F0
 * Callers:
 *     HalpUpdateIrtDestinationId @ 0x1405537EC (HalpUpdateIrtDestinationId.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuUpdateRemappingDestination(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // rbx
  ULONG_PTR *v4; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = (ULONG_PTR *)HalpIommuList;
  while ( v3 != &HalpIommuList )
  {
    v4 = v3;
    v3 = (ULONG_PTR *)*v3;
    result = *((unsigned int *)v4 + 118);
    if ( (result & 0x40) != 0 )
    {
      LOBYTE(a2) = 1;
      result = guard_dispatch_icall_no_overrides(v4[2], a2);
    }
  }
  return result;
}
