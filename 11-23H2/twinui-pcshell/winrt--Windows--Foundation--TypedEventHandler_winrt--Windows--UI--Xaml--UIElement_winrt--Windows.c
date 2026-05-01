/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs_::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs___lambda_28e2deb1c60008eafa8d487ea9ad6bb5___ @ 0x18076FD24
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs_::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs___lambda_28e2deb1c60008eafa8d487ea9ad6bb5___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180985F98;
  *a1 = v6;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(a2);
  return a1;
}
