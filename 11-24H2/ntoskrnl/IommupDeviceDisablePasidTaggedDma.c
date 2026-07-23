/*
 * XREFs of IommupDeviceDisablePasidTaggedDma @ 0x1406FCE68
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 */

__int64 __fastcall IommupDeviceDisablePasidTaggedDma(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx

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
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), v3);
  *(_WORD *)(a1 + 273) = 0;
  *(_BYTE *)(a1 + 272) = 0;
  return v1;
}
