/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1404B2420
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BE880 (HalpIommuBlockDevice.c)
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x140553BC0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuQueryAcpiDeviceMapping(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR v6; // r9

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = 3221226021LL;
  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    v6 = i[45];
    if ( v6 )
    {
      result = guard_dispatch_icall_no_overrides(i[2], a1, a2, v6);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
  }
  return result;
}
