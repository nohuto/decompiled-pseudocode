/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180216930
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WEA@EAAPEAXI@Z @ 0x180604E30 (--_E-$heap_implements@V-$module_count_wrapper@UThemeCoordinator@implementation@Them_ea_180604E30.c)
 * Callees:
 *     ??1?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1802C092C (--1-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vector deleting destructor'(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::~module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x140);
  return a1;
}
