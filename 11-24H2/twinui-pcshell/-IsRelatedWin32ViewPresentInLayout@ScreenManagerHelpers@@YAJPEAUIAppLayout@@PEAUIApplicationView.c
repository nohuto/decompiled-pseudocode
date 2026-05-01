/*
 * XREFs of ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x180523DF4
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x18051A568 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180109F70 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801D12F4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1804BE644 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
        ScreenManagerHelpers *this,
        __int64 (__fastcall ***a2)(struct IAppLayout *, GUID *, __int64 *),
        struct IApplicationView *a3,
        struct IApplicationView **a4)
{
  __int64 (__fastcall *v7)(struct IAppLayout *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int ApplicationViewsFromLayout; // ebx
  int (__fastcall *v10)(struct IAppLayout *, GUID **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  DWORD WindowThreadProcessId; // ebx
  struct IApplicationView *v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  HWND v18; // [rsp+38h] [rbp-28h] BYREF
  GUID *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v23; // [rsp+98h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+A0h] [rbp+40h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)a3 = 0LL;
  v17 = 0LL;
  v7 = **a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IWin32ApplicationView>>(&v17);
  ApplicationViewsFromLayout = v7((struct IAppLayout *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v8);
  if ( ApplicationViewsFromLayout >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this + 48LL))(this) )
    {
      ApplicationViewsFromLayout = -2147019873;
      goto LABEL_23;
    }
    v25 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    ApplicationViewsFromLayout = TabletModePositionerHelpers::GetApplicationViewsFromLayout(
                                   this,
                                   (struct IAppLayout *)&hWnd,
                                   (unsigned int *)&v25,
                                   &v15);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_5:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      goto LABEL_23;
    }
    v16 = 0LL;
    ApplicationViewsFromLayout = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v25, &v16);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_7:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      goto LABEL_5;
    }
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v23 = 0;
    v10 = (int (__fastcall *)(struct IAppLayout *, GUID **))(*a2)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
    v20 = -1LL;
    v21 = -1LL;
    if ( v10((struct IAppLayout *)a2, &v19) >= 0
      && v19
      && LOWORD(v19->Data1)
      && (int)(*v25)[19](v25, v19, (__int64 *)&v23) >= 0
      && v23 )
    {
      v11 = (**v25)(v25, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, (__int64 *)a3);
      ApplicationViewsFromLayout = v11;
      if ( v11 >= 0 )
      {
LABEL_16:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
        goto LABEL_7;
      }
      v12 = 38LL;
    }
    else
    {
      hWnd = 0LL;
      v18 = 0LL;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &hWnd);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_16;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &v18);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_16;
      WindowThreadProcessId = GetWindowThreadProcessId(hWnd, 0LL);
      if ( WindowThreadProcessId != GetWindowThreadProcessId(v18, 0LL) )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
        ApplicationViewsFromLayout = -2147467259;
        goto LABEL_23;
      }
      v11 = (**v25)(v25, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, (__int64 *)a3);
      ApplicationViewsFromLayout = v11;
      if ( v11 >= 0 )
        goto LABEL_16;
      v12 = 52LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_16;
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return (unsigned int)ApplicationViewsFromLayout;
}
