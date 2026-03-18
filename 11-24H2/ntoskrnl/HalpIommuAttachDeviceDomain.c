/*
 * XREFs of HalpIommuAttachDeviceDomain @ 0x140551FD8
 * Callers:
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuJoinDmaDomain @ 0x1405540A8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( HalpHvIommu )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2, a3, 0LL);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = a3;
  return result;
}
