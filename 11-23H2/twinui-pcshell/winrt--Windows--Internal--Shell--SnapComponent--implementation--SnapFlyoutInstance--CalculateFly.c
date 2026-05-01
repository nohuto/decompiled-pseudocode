/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_InitCoro$2 @ 0x18022C50C
 * Callers:
 *     ?CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBURect@967@@Z @ 0x18022CC38 (-CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x180069A58 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18022C660 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022C660.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@QEAA@XZ @ 0x18068E618 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@winr_ea_18068E618.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8)
{
  char v10; // r10
  __int64 v11; // rbx

  v10 = *a7;
  *(_QWORD *)(a2 + 177) = a4;
  *(_QWORD *)(a2 + 185) = a5;
  *(_QWORD *)(a2 + 193) = a6;
  *(_BYTE *)(a2 + 201) = v10;
  *(_QWORD *)(a2 + 209) = a8;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v11 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type::promise_type(v11);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    v11,
    a3);
  *(_BYTE *)(a2 + 176) = 0;
  return winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__ResumeCoro_1(a2);
}
