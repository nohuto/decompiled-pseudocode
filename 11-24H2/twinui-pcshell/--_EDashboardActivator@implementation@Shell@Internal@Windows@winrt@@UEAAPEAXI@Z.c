/*
 * XREFs of ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805CD0C0
 * Callers:
 *     ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z @ 0x1805CCFB0 (--_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180223C00 (--1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
