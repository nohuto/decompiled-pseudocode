/*
 * XREFs of ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBURect@Foundation@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBURect@Foundation@71@@Z @ 0x1801CE4AC
 * Callers:
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x1801CE1EC (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x1805B8728 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win_ea_1805B8728.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::Rect const &>(
        struct winrt::Windows::Foundation::Rect *a1)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v3; // [rsp+38h] [rbp+10h]

  v3 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)operator new(0x80uLL);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
    v3,
    a1);
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
  return v3;
}
