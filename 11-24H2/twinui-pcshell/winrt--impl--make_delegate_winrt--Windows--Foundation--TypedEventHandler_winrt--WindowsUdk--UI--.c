/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1805FEF44
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x18018EB20 (--0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  char *v6; // [rsp+40h] [rbp+8h]

  v6 = (char *)operator new(0x48uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  *((_QWORD *)v6 + 2) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *((_QWORD *)v6 + 3) = v4;
  *((_QWORD *)v6 + 4) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v6 + 4);
  *(_OWORD *)(v6 + 40) = *(_OWORD *)(a2 + 24);
  winrt::impl::resume_apartment_context::resume_apartment_context((__int64)(v6 + 56), (__int64 *)(a2 + 40));
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *a1 = v6;
  *(_QWORD *)v6 = off_1807584C0;
  return a1;
}
