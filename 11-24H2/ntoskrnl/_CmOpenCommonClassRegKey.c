/*
 * XREFs of _CmOpenCommonClassRegKey @ 0x1408C5CDC
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408B99E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14097F250 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409AE104 (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409AE8F4 (_CmOpenInstallerClassRegKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInterfaceClassWorker @ 0x1409C3DBC (_CmCreateInterfaceClassWorker.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140A1AF98 (_CmOpenInterfaceClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmOpenCommonClassRegKey(
        _QWORD *a1,
        WCHAR *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(void *, WCHAR *, __int64, int, int, __int64); // rdi
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v18; // eax
  _DWORD v19[4]; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+60h] [rbp-61h]
  int v21; // [rsp+64h] [rbp-5Dh]
  int v22; // [rsp+68h] [rbp-59h]
  char v23; // [rsp+6Ch] [rbp-55h]
  __int64 v24; // [rsp+70h] [rbp-51h]
  _DWORD v25[14]; // [rsp+78h] [rbp-49h] BYREF

  memset_0(v19, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v12 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v12 = 4;
  }
  v13 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))a1[63];
  v22 = a5;
  v23 = a6;
  v21 = a4;
  v24 = a7;
  v20 = a3;
  if ( v13 )
  {
    if ( v13 == PiPnpRtlCmActionCallback )
      v14 = PiPnpRtlCmActionCallback(a1, a2, v12, 11, 1, (__int64)v19);
    else
      v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
      {
LABEL_16:
        v16 = v19[0];
        goto LABEL_9;
      }
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  v15 = CmOpenCommonClassRegKeyWorker((_DWORD)a1, (_DWORD)a2, v20, v21, v22, v23, v24, (__int64)v25);
  v16 = v15;
  if ( v13 )
  {
    v19[0] = v15;
    v18 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v18 != -1073741822 )
    {
      if ( v18 != -1073741536 )
      {
        if ( !v18 )
          goto LABEL_9;
        return (unsigned int)-1073741595;
      }
      goto LABEL_16;
    }
  }
LABEL_9:
  if ( v16 >= 0 && a8 )
    *a8 = v25[0];
  return (unsigned int)v16;
}
