/*
 * XREFs of ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805CD0FC
 * Callers:
 *     ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1805CCFC0 (--_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805CB4BC (--1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager::~DashboardManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
