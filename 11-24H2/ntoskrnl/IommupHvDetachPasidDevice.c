/*
 * XREFs of IommupHvDetachPasidDevice @ 0x1405637D8
 * Callers:
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx

  v2 = (_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 273) )
  {
    guard_dispatch_icall_no_overrides(*v2, a2);
    guard_dispatch_icall_no_overrides(*v2, 33LL);
  }
  guard_dispatch_icall_no_overrides(*v2, a2);
  return guard_dispatch_icall_no_overrides(*v2, v3);
}
