/*
 * XREFs of ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180100090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800118EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800277DC (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Foundation@Windows@winrt@@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@34@@impl@winrt@@QEBA@XZ @ 0x1800A920C (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4AppModelFrameworkKind@WindowManag.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ACA0C (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800B9F0C (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x1800FF908 (--$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x1800FFFCC (-MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x180100290 (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCTarget::OnUniversalPropertyChanged(
        __int64 a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        __int64 **a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  MPCHolographicInputManager *Instance; // rax
  int v11; // r12d
  __int64 v12; // rdi
  ISMTracing *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v17[2]; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>::Value((__int64 *)a3) == 3 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64 *, void *, __int64 *))*v6)(
        v6,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v16);
      v7 = v16;
      v15 = v16;
    }
    else
    {
      v15 = 0LL;
      v7 = 0LL;
    }
    if ( v7
      && *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
            &v15,
            &v19) == *(_QWORD *)(a1 + 48) )
    {
      v18 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(
                                                                 a3,
                                                                 &v19);
      winrt::impl::unbox_value_type_or<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind,std::optional<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,winrt::Windows::Foundation::IUnknown const &,std::nullopt_t const &>(
        (__int64)v17,
        &v18,
        v8);
      if ( v19 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
      if ( LOBYTE(v17[1]) )
      {
        v9 = v17[0];
        *(_DWORD *)(a1 + 44) = v17[0];
        Instance = MPCHolographicInputManager::GetInstance();
        v11 = *(_DWORD *)(a1 + 44);
        v12 = *(_QWORD *)(a1 + 48);
        if ( MPCHolographicInputManager::Get3DFocusedWindowId(Instance) == v12 )
          *(_BYTE *)MPCGamepadInputHelper::GetInstance() = v11 == 1;
        *(_BYTE *)(a1 + 40) = *(_DWORD *)(a1 + 44) == 1;
        if ( ISMTracing::IsEnabled() )
        {
          ISMTracing::Instance();
          ISMTracing::MPCTarget_UpdatedFrameworkViewType_(v13, (struct IMPCTarget *)a1, v9, *(_QWORD *)(a1 + 48));
        }
        MPCTarget::StopWindowWatcher((MPCTarget *)a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
      }
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v15);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)a3);
  return 0LL;
}
