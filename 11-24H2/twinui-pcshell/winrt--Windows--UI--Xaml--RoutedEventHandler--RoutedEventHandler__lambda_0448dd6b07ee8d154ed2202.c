/*
 * XREFs of winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_0448dd6b07ee8d154ed22029eec6a770___ @ 0x1806A8880
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_0448dd6b07ee8d154ed22029eec6a770___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r8
  char *v7; // [rsp+38h] [rbp+10h]

  v7 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *a2;
  *a2 = 0LL;
  v5[2] = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v5 = off_1808C1AE0;
  *a1 = v5;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}
