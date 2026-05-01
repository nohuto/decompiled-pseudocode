/*
 * XREFs of ?WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x1805BA834
 * Callers:
 *     ?remove_WindowDragging@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1805BB2C0 (-remove_WindowDragging@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@In.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::WindowDragging(
        RTL_SRWLOCK *this,
        PVOID *a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::remove(
    this + 12,
    *a2);
}
