/*
 * XREFs of ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x1805596DC
 * Callers:
 *     ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x1802359F0 (-TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z.c)
 *     ?TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z @ 0x180559660 (-TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopTabletModePolicy::TransitionToDesktopMode(
        VirtualDesktopTabletModePolicy *this,
        struct IAppLayout *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(struct IAppLayout *, _QWORD, __int64); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(struct IAppLayout *, _QWORD, __int64, _QWORD, int *); // rbx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v18[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+60h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  v4 = *((_QWORD *)this + 10);
  v20 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  if ( a2 )
  {
    *(_QWORD *)v18 = 0LL;
    v5 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v18);
    v6 = v5(a2, 0LL, 1LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 89LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v18);
      goto LABEL_23;
    }
    v9 = 0LL;
    memset_0(v22, 0, 0x40uLL);
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v18 + 24LL))(*(_QWORD *)v18, 1LL, v22) >= 0 )
    {
      v19 = 0LL;
      v10 = *((_QWORD *)this + 8);
      v11 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      if ( v11(v10, v23, *((_QWORD *)this + 6), &v19) >= 0 )
      {
        v21 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 184LL))(v23, &v21);
        if ( v12 >= 0 )
        {
          if ( v21 > v9 )
          {
            v9 = v21;
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v20, &v19);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x64,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    v13 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, _QWORD, int *))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v18);
    v6 = v13(a2, 0LL, 1LL, 0LL, v18);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 111LL;
      goto LABEL_14;
    }
    v4 = v20;
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v18 + 24LL))(*(_QWORD *)v18, 1LL, v22) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 352LL))(
        *((_QWORD *)this + 7),
        v23,
        v4);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v18);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 448LL))(*((_QWORD *)this + 7), v4);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 392LL))(*((_QWORD *)this + 7), v4);
    v7 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)(unsigned int)v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)(unsigned int)v14);
    v7 = v15;
  }
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  return v7;
}
