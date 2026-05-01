/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x180251C70
 * Callers:
 *     ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x180252260 (-ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-$IAsyncOperation@.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x180069A58 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x180251DE0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 *     ??0_parameters_@?L@??ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z@QEAA@PEAU234567@$$QEAV?$shared_ptr@VPinOperationContext@@@std@@1@Z @ 0x18069DD30 (--0_parameters_@-L@--ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@QEAA@XZ @ 0x18069E2F8 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@_ea_18069E2F8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_2(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6)
{
  __int64 v6; // r10
  _DWORD *v9; // r11

  v6 = a4;
  LOBYTE(a4) = *a5;
  `winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog'::`11'::_parameters_::_parameters_(
    a2 + 321,
    a6,
    v6,
    a4,
    a2,
    a3);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v9 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::promise_type(a2 - 112);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    a2 - 112,
    a3);
  *(_BYTE *)(a2 + 320) = 0;
  return winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1(a2);
}
