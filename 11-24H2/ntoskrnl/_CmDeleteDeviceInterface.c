/*
 * XREFs of _CmDeleteDeviceInterface @ 0x1409AABD0
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818ED8 (_CmDeleteDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmDeleteDeviceInterface(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD v15[4]; // [rsp+40h] [rbp-88h] BYREF
  int v16; // [rsp+50h] [rbp-78h]

  memset_0(v15, 0, 0x58uLL);
  v7 = *(_QWORD *)(a1 + 504);
  v16 = a3;
  if ( v7 )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v15[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  v9 = CmDeleteDeviceInterfaceWorker(a1, a2, v16, v6);
  v10 = v9;
  if ( !v7 )
    return v10;
  v15[0] = v9;
  v11 = guard_dispatch_icall_no_overrides(a1, a2);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v10;
  if ( v11 == -1073741536 )
    return v15[0];
  v13 = v10;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
