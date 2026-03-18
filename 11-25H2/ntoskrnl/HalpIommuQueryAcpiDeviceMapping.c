/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1404B1354
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BFF40 (HalpIommuBlockDevice.c)
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x1405512C0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuQueryAcpiDeviceMapping(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *i; // rbx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = 3221226021LL;
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( i[45] )
    {
      result = guard_dispatch_icall_no_overrides(i[2], a1);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
  }
  return result;
}
