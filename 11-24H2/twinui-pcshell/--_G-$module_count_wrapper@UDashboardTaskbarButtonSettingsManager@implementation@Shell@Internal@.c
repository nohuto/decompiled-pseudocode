/*
 * XREFs of ??_G?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805DDD00
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x1805DDCE0 (--_E-$heap_implements@V-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementat.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805DDC74 (--1-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@W.c)
 */

winrt::immersive_shell_component *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>::`scalar deleting destructor'(
        winrt::immersive_shell_component *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
