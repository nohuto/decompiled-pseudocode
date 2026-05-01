/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs__winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs__::_1_::catch$2 @ 0x18070BFC1
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@_E@Z @ 0x18040EF14 (--$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs__winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *winrt::to_hresult((_DWORD *)(a2 + 72));
  ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
    v4,
    v3,
    &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>'::`4'::handler);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>'::`4'::handler)(
    v2,
    0LL,
    0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
