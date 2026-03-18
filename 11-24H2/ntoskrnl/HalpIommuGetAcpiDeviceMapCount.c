/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x140553D7C
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x140553BC0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  __int64 result; // rax
  ULONG_PTR v7; // r8

  v4 = (ULONG_PTR *)HalpIommuList;
  result = 0LL;
  while ( v4 != &HalpIommuList )
  {
    v7 = v4[46];
    if ( v7 )
    {
      result = guard_dispatch_icall_no_overrides(v4[2], a1, v7, a4);
      if ( (_DWORD)result )
        break;
    }
    v4 = (ULONG_PTR *)*v4;
  }
  return result;
}
