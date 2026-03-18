/*
 * XREFs of IommupHvDetachPasidDevice @ 0x140565B20
 * Callers:
 *     IommupDeviceDisableSvm @ 0x1406FF2A8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = (_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 273) )
  {
    guard_dispatch_icall_no_overrides(*v4, a2, a3, a4);
    guard_dispatch_icall_no_overrides(*v4, 33LL, 0LL, v5);
  }
  guard_dispatch_icall_no_overrides(*v4, a2, a3, a4);
  return guard_dispatch_icall_no_overrides(*v4, v6, v7, v8);
}
