/*
 * XREFs of _lambda_2963e69eee30b127a29e593e76581bd4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x180204858
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_2963e69eee30b127a29e593e76581bd4___::Invoke @ 0x18020A8D0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18020A8D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18006D1B4 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA?AW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4ShellView@Shell@6WindowsUdk@winrt@@@Z @ 0x180516464 (-ShellViewToCoreKeyboardViewType@TouchKeyboardExperienceManager@@AEAA-AW4CoreKeyboardViewType@Co.c)
 *     ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528A9C (-OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2963e69eee30b127a29e593e76581bd4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v11 = 0LL;
  v5 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v11);
  if ( v5 >= 0 )
  {
    if ( v11 )
    {
      LODWORD(v12) = 0;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL))(*a3, &v12);
      if ( v7 < 0 )
        winrt::throw_hresult((unsigned int)v7);
      v9 = TouchKeyboardExperienceManager::ShellViewToCoreKeyboardViewType(v8, (unsigned int)v12);
      KeyboardHosting::TabTipAdapter::OnShellViewCoordinatorHideRequested(*(_QWORD *)(*(_QWORD *)a1 + 584LL), v9, a3);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD1B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result(a3);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
}
