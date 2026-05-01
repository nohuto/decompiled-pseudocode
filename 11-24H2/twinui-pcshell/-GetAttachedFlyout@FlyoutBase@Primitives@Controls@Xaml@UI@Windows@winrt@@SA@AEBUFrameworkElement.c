/*
 * XREFs of ?GetAttachedFlyout@FlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement@4567@@Z @ 0x1802101CC
 * Callers:
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18027499C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@V_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@impl@winrt@@YA?A_P$$QEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1802101F8 (--$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@23456.c)
 */

const struct winrt::Windows::UI::Xaml::FrameworkElement *__fastcall winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::GetAttachedFlyout(
        const struct winrt::Windows::UI::Xaml::FrameworkElement *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::call_factory<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics,_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_>(
    a1,
    &v4);
  return a1;
}
