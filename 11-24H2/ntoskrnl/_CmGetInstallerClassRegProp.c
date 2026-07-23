/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x14097F09C
 * Callers:
 *     _CmServiceFilterCallback @ 0x14081C5C0 (_CmServiceFilterCallback.c)
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14097FAAC (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14097F250 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(
        _QWORD *a1,
        WCHAR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v10)(void *, WCHAR *, __int64, int, int, __int64); // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _DWORD v19[4]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v20; // [rsp+60h] [rbp-61h]
  int v21; // [rsp+68h] [rbp-59h]
  __int64 v22; // [rsp+70h] [rbp-51h]
  __int64 v23; // [rsp+78h] [rbp-49h]
  __int64 v24; // [rsp+80h] [rbp-41h]
  int v25; // [rsp+88h] [rbp-39h]

  memset_0(v19, 0, 0x58uLL);
  v10 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))a1[63];
  v25 = 0;
  v24 = a7;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  v23 = a6;
  if ( v10 )
  {
    if ( v10 == PiPnpRtlCmActionCallback )
      v11 = PiPnpRtlCmActionCallback(a1, a2, 2LL, 9, 1, (__int64)v19);
    else
      v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return v19[0];
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker((_DWORD)a1, (_DWORD)a2, v20, v21, v22, v23, v24, v25);
  v13 = InstallerClassRegPropWorker;
  if ( !v10 )
    return v13;
  v19[0] = InstallerClassRegPropWorker;
  v14 = v10 == PiPnpRtlCmActionCallback
      ? PiPnpRtlCmActionCallback(a1, a2, 2LL, 9, 2, (__int64)v19)
      : guard_dispatch_icall_no_overrides(a1, a2);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return v19[0];
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
