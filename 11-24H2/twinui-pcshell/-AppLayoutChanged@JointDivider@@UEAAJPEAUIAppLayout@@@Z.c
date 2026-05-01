/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805324A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1805327D4 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x180532CE0 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18053DA30 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // ecx
  HFONT GlyphFont; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(struct IAppLayout *, _QWORD, __int64, GUID *, int *); // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  HRESULT v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, int *, struct IApplicationView **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  HWND v18; // rcx
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  struct IApplicationView *v20; // [rsp+48h] [rbp-11h] BYREF
  int v21[2]; // [rsp+50h] [rbp-9h] BYREF
  int v22; // [rsp+58h] [rbp-1h] BYREF
  int X[4]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v24; // [rsp+70h] [rbp+17h] BYREF
  DEVICE_SCALE_FACTOR v25[4]; // [rsp+80h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  (*(void (__fastcall **)(struct IAppLayout *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v24);
  v4 = v25[0];
  if ( v25[0] != *((_DWORD *)this + 14) )
  {
    *((DEVICE_SCALE_FACTOR *)this + 14) = v25[0];
    *((_QWORD *)this + 6) = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont(v4);
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)this + 6);
    *((_QWORD *)this + 6) = GlyphFont;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 2LL) == 1 )
  {
    v6 = JointDivider::EnsureWindow((JointDivider *)((char *)this - 24));
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *(_QWORD *)v21 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
    v10 = v9(a2, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v21);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
      return v7;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v21 + 56LL))(*(_QWORD *)v21, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v11 = 0LL;
      LOWORD(v12) = 184;
      while ( !(_DWORD)v11 )
      {
        if ( X[2] - X[0] == (int)(float)((float)(dword_1807CF320[6 * v11 + 4] * *((_DWORD *)this + 14)) / 100.0) )
        {
          v12 = dword_1807CF320[6 * v11 + 5];
          break;
        }
        v11 = 1LL;
      }
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), ((unsigned __int16)v12 << 16) | 3u);
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *((IUnknown **)this - 1),
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
            &ppvOut);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v13);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_24;
    }
    v22 = 0;
    v20 = 0LL;
    v14 = ppvOut;
    v15 = *(__int64 (__fastcall **)(void *, int *, struct IApplicationView **))(*(_QWORD *)ppvOut + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    v16 = v15(v14, &v22, &v20);
    v7 = v16;
    if ( v16 < 0 )
    {
      v17 = 116LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
      goto LABEL_23;
    }
    v16 = JointDivider::ShellTargetChanged(this, v20);
    v7 = v16;
    if ( v16 < 0 )
    {
      v17 = 117LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
  }
  else
  {
    v18 = (HWND)*((_QWORD *)this + 3);
    if ( v18 )
      ShowWindow(v18, 0);
  }
  return 0LL;
}
