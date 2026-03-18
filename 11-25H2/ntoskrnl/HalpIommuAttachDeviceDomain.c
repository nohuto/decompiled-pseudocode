/*
 * XREFs of HalpIommuAttachDeviceDomain @ 0x14054F6D8
 * Callers:
 *     HalpIommuLeaveDmaDomain @ 0x1404B4FB8 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuJoinDmaDomain @ 0x1405517A8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( HalpHvIommu )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16));
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = a3;
  return result;
}
