/*
 * XREFs of ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiveMonitorManager@@PEAUHWND__@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x18053D538
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1802A33F0 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x1802C2044 (-RegisterWindowClass@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802C3BB8 (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x18053D4EC (-IsTransparencyEnabled@GhostDivider@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GhostDivider::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  __int64 (__fastcall *v10)(__int64, IUnknown **); // rbx
  int ScaleFactorForMonitor; // eax
  unsigned int LastError; // ebx
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  int v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  GhostDivider *v25; // rcx
  HWND Window; // rax
  const char *v27; // r9
  HWND v28; // rdi
  GhostDivider *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  bool IsTransparencyEnabled; // al
  int v33; // eax
  HRESULT v34; // eax
  __int64 v35; // rdx
  void *v36; // rbx
  __int64 (__fastcall *v37)(void *, HWND, __int64, __int64); // r14
  void *ppvOut; // [rsp+60h] [rbp-71h] BYREF
  IUnknown *punk; // [rsp+68h] [rbp-69h] BYREF
  int pvAttribute; // [rsp+70h] [rbp-61h] BYREF
  __int64 v42; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v43[4]; // [rsp+80h] [rbp-51h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-21h] BYREF
  _DWORD v46[4]; // [rsp+C0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]

  *(_BYTE *)(a1 + 93) = a6 <= 1;
  v45 = 0LL;
  v44 = 0LL;
  punk = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)a3 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  ScaleFactorForMonitor = v10(a3, &punk);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 85LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_43;
  }
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[3].Release)(punk, &v45);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 87LL;
    goto LABEL_5;
  }
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 128LL))(a3, &v44);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 89LL;
    goto LABEL_5;
  }
  v42 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].Release)(punk, &v42);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 92LL;
    goto LABEL_5;
  }
  v14 = (_DWORD *)(a1 + 72);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v42, a1 + 72);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v13 = 93LL;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(a1 + 93) )
  {
    v15 = (int)(float)((float)(16 * *v14) / 100.0);
    *(_DWORD *)(a1 + 84) = v15;
    v16 = DWORD1(v44);
    if ( a7 )
      v17 = HIDWORD(v44) - DWORD1(v44);
    else
      v17 = HIDWORD(v45) - DWORD1(v45);
    *(_DWORD *)(a1 + 88) = v17;
    v18 = v15 / 2;
    v19 = v44;
    if ( a6 )
      v19 = DWORD2(v44);
    *(_DWORD *)(a1 + 76) = v19 - v18;
    if ( !a7 )
      v16 = DWORD1(v45);
  }
  else
  {
    v20 = v44;
    if ( a7 )
      v21 = DWORD2(v44) - v44;
    else
      v21 = DWORD2(v45) - v45;
    *(_DWORD *)(a1 + 84) = v21;
    v22 = (int)(float)((float)(16 * *v14) / 100.0);
    *(_DWORD *)(a1 + 88) = v22;
    if ( !a7 )
      v20 = v45;
    *(_DWORD *)(a1 + 76) = v20;
    v23 = v22 / 2;
    v24 = DWORD1(v44);
    if ( a6 != 2 )
      v24 = HIDWORD(v44);
    v16 = (unsigned int)(v24 - v23);
  }
  *(_DWORD *)(a1 + 80) = v16;
  *(_DWORD *)(a1 + 96) = GhostDivider::GetColor((GhostDivider *)v16);
  GhostDivider::RegisterWindowClass(v25);
  Window = CreateWindowExW(
             0x82800A0u,
             L"GhostDivider",
             &pvData,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             &_ImageBase,
             (LPVOID)a1);
  v28 = Window;
  v43[3] = Window;
  if ( Window )
  {
    SetLayeredWindowAttributes(Window, 0, 0xFFu, 2u);
    v46[3] = 0;
    if ( (unsigned __int8)GetIsImmersiveColorUsingHighContrast(0LL)
      || (IsTransparencyEnabled = GhostDivider::IsTransparencyEnabled(v29), v46[0] = 4, !IsTransparencyEnabled) )
    {
      v46[0] = 1;
    }
    v46[2] = *(_DWORD *)(a1 + 96);
    v46[1] = *(_BYTE *)(a1 + 93) != 0 ? 161 : 321;
    v43[0] = 19LL;
    v43[1] = v46;
    v43[2] = 16LL;
    SetWindowCompositionAttribute(v28, v43, v30, v31);
    pvAttribute = 1;
    DwmSetWindowAttribute(*(HWND *)(a1 + 24), 0xDu, &pvAttribute, 4u);
    SetWindowPos(
      v28,
      0LL,
      *(_DWORD *)(a1 + 76),
      *(_DWORD *)(a1 + 80),
      *(_DWORD *)(a1 + 84),
      *(_DWORD *)(a1 + 88),
      0x54u);
    v33 = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)a2 + 40LL))(a2, v28, -1LL);
    LastError = v33;
    if ( v33 >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v34 = IUnknown_QueryService(punk, &stru_1807B28F8, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
      LastError = v34;
      if ( v34 >= 0 )
      {
        v36 = ppvOut;
        v37 = *(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)ppvOut + 56LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
        v34 = v37(v36, v28, 1LL, a1 + 48);
        LastError = v34;
        if ( v34 >= 0 )
        {
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 32), a2);
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 40), a3);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          LastError = 0;
          goto LABEL_43;
        }
        v35 = 167LL;
      }
      else
      {
        v35 = 166LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
        (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
        (const char *)(unsigned int)v33);
    }
    DestroyWindow(v28);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x7E,
                  (unsigned int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
                  v27);
  }
LABEL_43:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  return LastError;
}
