/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___ @ 0x18076FD9C
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  v6[2] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_180985F38;
  *a1 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 1);
  return a1;
}
