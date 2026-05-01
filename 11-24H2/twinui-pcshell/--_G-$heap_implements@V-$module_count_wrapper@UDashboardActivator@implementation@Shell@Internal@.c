/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805CD084
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1805CCF90 (--_E-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@.c)
 * Callees:
 *     ??1?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18021C450 (--1-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
