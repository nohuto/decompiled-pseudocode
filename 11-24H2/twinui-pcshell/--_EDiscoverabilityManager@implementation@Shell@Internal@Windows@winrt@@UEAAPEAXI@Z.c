/*
 * XREFs of ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180619728
 * Callers:
 *     ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1806196A0 (--_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180619058 (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::~DiscoverabilityManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
