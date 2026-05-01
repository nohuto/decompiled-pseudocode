/*
 * XREFs of ??$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@V_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@impl@winrt@@YA?A_P$$QEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1802101F8
 * Callers:
 *     ?GetAttachedFlyout@FlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement@4567@@Z @ 0x1802101CC (-GetAttachedFlyout@FlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement.c)
 * Callees:
 *     ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1802C7738 (--R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windo.c)
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?A_PAEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805BF7F0 (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::call_factory<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics,_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_>(
        __int64 a1,
        __int64 a2)
{
  _InterlockedIncrement64(&qword_1808CC378);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> )
  {
    _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(
      a2,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>);
    _InterlockedDecrement64(&qword_1808CC378);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC378);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::call<_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_ &>(
      &qword_1808CC378,
      a1,
      a2);
  }
  return a1;
}
