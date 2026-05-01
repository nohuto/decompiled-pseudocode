/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___winrt::hstring_winrt::hstring_winrt::Windows::UI::StartScreen::SecondaryTile__ITEMIDLIST_const___unaligned___bool_bool_enum_PINNEDLISTMODIFYCALLER_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_tip2::tip_test_tip2::details::merged_data_PinManagerTipTests::_tip_PinManagerPinTest_PinManagerTipTests::_tip_PinManagerPinTest____tip2::test_watcher_tip2::details::merged_data_PinManagerTipTests::_tip_PinManagerPinTest_PinManagerTipTests::_tip_PinManagerPinTest_____::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$5 @ 0x18069CD22
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@_E@Z @ 0x18040EF14 (--$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHHHPEAX@_EP6AHHH2@.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___winrt::hstring_winrt::hstring_winrt::Windows::UI::StartScreen::SecondaryTile__ITEMIDLIST_const___unaligned___bool_bool_enum_PINNEDLISTMODIFYCALLER_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_tip2::tip_test_tip2::details::merged_data_PinManagerTipTests::_tip_PinManagerPinTest_PinManagerTipTests::_tip_PinManagerPinTest____tip2::test_watcher_tip2::details::merged_data_PinManagerTipTests::_tip_PinManagerPinTest_PinManagerTipTests::_tip_PinManagerPinTest_____::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch_5(
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
    &`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerPinItemToTaskbarShim,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerPinItemToTaskbarShim,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler)(
    v2,
    0LL,
    0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
