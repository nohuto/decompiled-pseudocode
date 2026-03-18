/*
 * XREFs of _CmDeleteDevice @ 0x140818298
 * Callers:
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     PipResetDevice @ 0x140C21D70 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 */

__int64 __fastcall CmDeleteDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[24]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v14, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 504);
  v14[4] = a3;
  if ( v6 )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 3LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceWorker(a1);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 3LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
