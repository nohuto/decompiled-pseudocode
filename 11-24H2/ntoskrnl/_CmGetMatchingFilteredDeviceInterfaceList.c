/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409AA710
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x140819658 (_CmDeleteInterfaceClassWorker.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14081C23C (_CmGetMatchingDeviceInterfaceList.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B71A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  _QWORD *v13; // rcx
  __int64 (__fastcall *v14)(void *, WCHAR *, __int64, int, int, __int64); // r10
  int v15; // eax
  unsigned int v16; // ebx
  __int64 (__fastcall *v18)(void *, WCHAR *, __int64, int, int, __int64); // rdi
  unsigned int MatchingFilteredDeviceInterfaceListWorker; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 (__fastcall *v24)(void *, WCHAR *, __int64, int, int, __int64); // [rsp+58h] [rbp-79h]
  _DWORD v25[4]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v26; // [rsp+70h] [rbp-61h]
  __int64 v27; // [rsp+78h] [rbp-59h]
  unsigned int v28; // [rsp+80h] [rbp-51h]
  __int64 v29; // [rsp+88h] [rbp-49h]
  __int64 v30; // [rsp+90h] [rbp-41h]
  __int64 v31; // [rsp+98h] [rbp-39h]
  int v32; // [rsp+A0h] [rbp-31h]
  __int64 v33; // [rsp+A8h] [rbp-29h]
  int v34; // [rsp+B0h] [rbp-21h]

  memset_0(v25, 0, 0x58uLL);
  v13 = a1;
  v33 = a9;
  v32 = a8;
  v14 = (__int64 (__fastcall *)(void *, WCHAR *, __int64, int, int, __int64))a1[63];
  v26 = a2;
  v27 = a3;
  v29 = a5;
  v24 = v14;
  v28 = a4;
  v30 = a6;
  v31 = a7;
  v34 = a10;
  if ( v14 )
  {
    if ( v14 == PiPnpRtlCmActionCallback )
      v15 = PiPnpRtlCmActionCallback(a1, 0LL, 3LL, 17, 1, (__int64)v25);
    else
      v15 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v15 == -1073741822 )
    {
      v18 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return v25[0];
      if ( v15 )
        return (unsigned int)-1073741595;
      v18 = v24;
    }
    v13 = a1;
  }
  else
  {
    v18 = 0LL;
  }
  MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                v13,
                                                v26,
                                                v27,
                                                v28,
                                                v29,
                                                v30,
                                                v31,
                                                v32,
                                                v33,
                                                v34);
  v16 = MatchingFilteredDeviceInterfaceListWorker;
  if ( v18 )
  {
    v25[0] = MatchingFilteredDeviceInterfaceListWorker;
    v20 = guard_dispatch_icall_no_overrides(a1, 0LL);
    v21 = v20;
    if ( v20 != -1073741822 )
    {
      if ( v20 == -1073741536 )
        return v25[0];
      v22 = v16;
      if ( v21 )
        return (unsigned int)-1073741595;
      return v22;
    }
  }
  return v16;
}
