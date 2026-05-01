/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1803ACED4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x1803AFA30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AFA30.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E194 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1803B511C (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1803B9C54 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(__int64 a1, unsigned int a2)
{
  HWND v3; // r15
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v6; // ebx
  HWND v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v15; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v17; // [rsp+90h] [rbp+48h] BYREF
  HWND v18; // [rsp+98h] [rbp+50h] BYREF

  v16 = a2;
  v17 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  v6 = v5(v4, &v17);
  if ( v6 >= 0 )
  {
    v14[0] = 0LL;
    v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v17,
           v14);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v17, &v18);
      v3 = v18;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  }
  v15 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v8 + 56LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
    v6 = v9(v8, &v15);
    if ( v6 >= 0 )
    {
      v6 = WindowFromViewWrapper(v15, &v18);
      v7 = v18;
    }
  }
  v16 = 0;
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), &v16);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 72LL))(*(_QWORD *)(a1 + 8), (unsigned int)v6);
  }
  else
  {
    v18 = *(HWND *)(a1 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v11);
      v12[2] = 0LL;
      if ( v12 + 2 != &v18 )
      {
        v12[2] = v10;
        v18 = 0LL;
      }
      *v12 = off_1807CFF18;
    }
    else
    {
      v12 = 0LL;
    }
    v6 = CAppViewManager::_SwitchAsyncWorker(*(_QWORD *)a1, v3, v7, v16, v15, v12, v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v6;
}
