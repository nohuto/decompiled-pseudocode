/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$5 @ 0x18069CC6E
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@_E@Z @ 0x18040EF14 (--$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *winrt::to_hresult((_DWORD *)(a2 + 56));
  ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
    v4,
    v3,
    &qword_180992B48);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_180992B48)(v2, 0LL, 0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
