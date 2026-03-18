/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x14055147C
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x1405512C0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIommuGetAcpiDeviceMapCount()
{
  ULONG_PTR *v0; // rbx
  __int64 result; // rax

  v0 = (ULONG_PTR *)HalpIommuList;
  result = 0LL;
  while ( v0 != &HalpIommuList )
  {
    if ( v0[46] )
    {
      result = guard_dispatch_icall_no_overrides(v0[2]);
      if ( (_DWORD)result )
        break;
    }
    v0 = (ULONG_PTR *)*v0;
  }
  return result;
}
