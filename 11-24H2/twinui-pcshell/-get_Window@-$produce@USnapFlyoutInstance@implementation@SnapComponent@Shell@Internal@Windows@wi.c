/*
 * XREFs of ?get_Window@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAHPEA_K@Z @ 0x1805B4B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Window@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_KXZ @ 0x1805B45E8 (-Window@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_KXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::get_Window(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Window((winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)((a1 - 24) & -(__int64)(a1 != 0)));
  return 0LL;
}
