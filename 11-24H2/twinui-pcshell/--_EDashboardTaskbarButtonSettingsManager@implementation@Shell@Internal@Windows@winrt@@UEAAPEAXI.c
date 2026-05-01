/*
 * XREFs of ??_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805DDD3C
 * Callers:
 *     ??_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1805DDCF0 (--_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPE.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1801CDD44 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager *this,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
