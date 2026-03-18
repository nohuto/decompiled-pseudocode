/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x140AAD2B4
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PipUnprotectDevice @ 0x14072A4DC (PipUnprotectDevice.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x140AAD390 (PnpTraceSecureDeviceEnumeration.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // rcx
  unsigned int v4; // edi
  int v5; // ebx
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v1 = 0;
  memset(v7, 0, sizeof(v7));
  v3 = *(_QWORD **)(a1 + 32);
  v4 = 1;
  v8 = 0LL;
  if ( (int)PnpQueryInterface(v3, (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE, 1u, 0x38u, 0LL, (USHORT *)v7) < 0 )
  {
    v5 = PipUnprotectDevice(a1);
    v1 = v5;
    if ( v5 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 48, -1073741790);
      v5 = -1073741106;
      v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v7[0] + 1));
    v5 = 0;
  }
  PnpTraceSecureDeviceEnumeration(a1, v4, v1);
  return (unsigned int)v5;
}
