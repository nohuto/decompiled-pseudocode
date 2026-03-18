/*
 * XREFs of IommupDeviceDisablePasidTaggedDma @ 0x1406F3438
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 */

__int64 __fastcall IommupDeviceDisablePasidTaggedDma(__int64 a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *(_BYTE *)(a1 + 273) )
  {
    if ( (*(_DWORD *)(a1 + 384) & 4) == 0 || !*(_BYTE *)(a1 + 274) )
      return (unsigned int)-1073741823;
  }
  else if ( !*(_BYTE *)(a1 + 274) )
  {
    return v1;
  }
  v1 = IommupDeviceDisableSvm();
  if ( *(_QWORD *)(a1 + 304) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288));
  *(_WORD *)(a1 + 273) = 0;
  *(_BYTE *)(a1 + 272) = 0;
  return v1;
}
