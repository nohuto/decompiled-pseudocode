/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x1405516BC
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x140551500 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  __int64 result; // rax

  v1 = (ULONG_PTR *)HalpIommuList;
  result = 0LL;
  while ( v1 != &HalpIommuList )
  {
    if ( v1[46] )
    {
      result = guard_dispatch_icall_no_overrides(v1[2], a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = (ULONG_PTR *)*v1;
  }
  return result;
}
