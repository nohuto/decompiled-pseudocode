/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AEF9C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AF360 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409C3AD4 (_CmCreateDeviceInterfaceWorker.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8C70 (IoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        _QWORD *a1,
        WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(void *, WCHAR *, __int64, int, int, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-59h]
  int v19; // [rsp+54h] [rbp-55h]
  ACCESS_MASK v20; // [rsp+58h] [rbp-51h]
  char v21; // [rsp+5Ch] [rbp-4Dh]
  HANDLE *v22; // [rsp+60h] [rbp-49h]
  _DWORD v23[14]; // [rsp+68h] [rbp-41h] BYREF

  memset_0(v17, 0, 0x58uLL);
  v11 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))a1[63];
  v19 = 0;
  v20 = a5;
  v18 = a3;
  v21 = a6;
  v22 = a7;
  if ( v11 )
  {
    if ( v11 == PiPnpRtlCmActionCallback )
      v12 = PiPnpRtlCmActionCallback(a1, a2, 3LL, 11, 1, (__int64)v17);
    else
      v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        goto LABEL_12;
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, v18, v19, v20, v21, v22, v23);
  v14 = v13;
  if ( !v11 )
    goto LABEL_7;
  v17[0] = v13;
  v16 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v16 == -1073741822 )
    goto LABEL_7;
  if ( v16 == -1073741536 )
  {
LABEL_12:
    v14 = v17[0];
    goto LABEL_7;
  }
  if ( v16 )
    return (unsigned int)-1073741595;
LABEL_7:
  if ( v14 >= 0 && a8 )
    *a8 = v23[0];
  return (unsigned int)v14;
}
