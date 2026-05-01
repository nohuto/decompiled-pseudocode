/*
 * XREFs of ??0?$producers_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x180299778
 * Callers:
 *     ??0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180299638 (--0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@X@impl@winrt@@QEAA@XZ @ 0x18029979C (--0-$producer_convert@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 *     ??0?$producer_convert@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@X@impl@winrt@@QEAA@XZ @ 0x1802997F0 (--0-$producer_convert@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern_ea_1802997F0.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,void>::producer_convert<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>::producer_convert<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>(v2 + 8);
  return v3;
}
