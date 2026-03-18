/*
 * XREFs of HalpIommuUpdateRemappingDestination @ 0x140B4D9A0
 * Callers:
 *     HalpUpdateIrtDestinationId @ 0x140555EAC (HalpUpdateIrtDestinationId.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuUpdateRemappingDestination(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR *v4; // rbx
  __int64 v6; // rbp
  ULONG_PTR *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = (ULONG_PTR *)HalpIommuList;
  v6 = a2;
  while ( v4 != &HalpIommuList )
  {
    v7 = v4;
    v4 = (ULONG_PTR *)*v4;
    result = *((unsigned int *)v7 + 118);
    if ( (result & 0x40) != 0 )
    {
      LOBYTE(a2) = 1;
      result = guard_dispatch_icall_no_overrides(v7[2], a2, v6, a3);
    }
  }
  return result;
}
