/*
 * XREFs of ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x180458F30
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180458AB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(HMONITOR a1, struct tagPOINT *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  LONG v13; // eax
  LONG v14; // eax
  int v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = ppv;
    v17 = 0LL;
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v8 = v7(v6, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v17);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v8);
LABEL_5:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      goto LABEL_22;
    }
    v9 = v17;
    *(_QWORD *)v16 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v17 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
    v11 = v10(v9, a1, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v16);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 115LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
      goto LABEL_5;
    }
    v18 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v16 + 80LL))(*(_QWORD *)v16, &v18);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 117LL;
      goto LABEL_8;
    }
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v16 + 168LL))(*(_QWORD *)v16, &v20);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 119LL;
      goto LABEL_8;
    }
    if ( v18 < 2 )
    {
      v14 = DWORD2(v20);
    }
    else
    {
      if ( v18 != 2 )
      {
        if ( v18 != 3 )
        {
LABEL_21:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
          v5 = 0;
          goto LABEL_22;
        }
        a2->x = DWORD2(v20);
        v13 = DWORD1(v20);
LABEL_20:
        a2->y = v13;
        goto LABEL_21;
      }
      v14 = v20;
    }
    a2->x = v14;
    v13 = HIDWORD(v20);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v5;
}
