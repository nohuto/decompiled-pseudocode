/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x18018EAB0
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x18018EA1C (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x18018EB20 (--0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax

  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(a1 + 1));
  a1[2] = *v4;
  v5 = v4[1];
  v4[1] = 0LL;
  a1[3] = v5;
  a1[4] = v4[2];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 4);
  winrt::impl::resume_apartment_context::resume_apartment_context(a1 + 5, a2 + 24);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *a1 = off_18071BEA8;
  return a1;
}
