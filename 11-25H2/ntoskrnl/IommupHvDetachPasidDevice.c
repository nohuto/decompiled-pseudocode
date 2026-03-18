/*
 * XREFs of IommupHvDetachPasidDevice @ 0x140563310
 * Callers:
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 273) )
  {
    guard_dispatch_icall_no_overrides(*v1);
    guard_dispatch_icall_no_overrides(*v1);
  }
  guard_dispatch_icall_no_overrides(*v1);
  return guard_dispatch_icall_no_overrides(*v1);
}
