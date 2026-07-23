/*
 * XREFs of PiProcessDriversLoadedOnSecureDevice @ 0x140981CA0
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PipUnprotectDevice @ 0x14073469C (PipUnprotectDevice.c)
 *     PnpTraceSecureDeviceEnumeration @ 0x140982060 (PnpTraceSecureDeviceEnumeration.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  unsigned int v1; // ebp
  void *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ebx
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = 0;
  memset(v8, 0, sizeof(v8));
  v3 = *(void **)(a1 + 32);
  v4 = 1;
  v9 = 0LL;
  if ( (int)PnpQueryInterface(v3, 0LL, v8) < 0 )
  {
    v6 = PipUnprotectDevice(a1);
    v1 = v6;
    if ( v6 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0LL, 48LL);
      v6 = -1073741106;
      v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v8[0] + 1), v5);
    v6 = 0;
  }
  PnpTraceSecureDeviceEnumeration(a1, v4, v1);
  return (unsigned int)v6;
}
