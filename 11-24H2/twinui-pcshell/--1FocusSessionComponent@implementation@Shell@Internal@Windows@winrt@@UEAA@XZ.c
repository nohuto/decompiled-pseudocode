/*
 * XREFs of ??1FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180210C58
 * Callers:
 *     ??1?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180208634 (--1-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1802DF100 (--_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent____::_1_::dtor$1 @ 0x1806D480F (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1806D480F.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::~FocusSessionComponent(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
