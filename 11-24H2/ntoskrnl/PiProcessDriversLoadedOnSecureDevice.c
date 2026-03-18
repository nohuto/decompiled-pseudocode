/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x1409C5488
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PipUnprotectDevice @ 0x14073676C (PipUnprotectDevice.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x1409C4EF4 (PnpTraceSecureDeviceEnumeration.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD **)(a1 + 32);
  v9 = 0LL;
  if ( (int)PnpQueryInterface(v2, (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE, 1u, 0x38u, 0LL, (USHORT *)v8) < 0 )
  {
    v6 = PipUnprotectDevice(a1);
    if ( v6 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0LL, 48LL);
      v6 = -1073741106;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v8[0] + 1), v3, v4, v5);
    v6 = 0;
  }
  PnpTraceSecureDeviceEnumeration();
  return (unsigned int)v6;
}
