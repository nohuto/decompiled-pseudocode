/*
 * XREFs of ??_G?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1803F0E80
 * Callers:
 *     ??_E?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCI@EAAPEAXI@Z @ 0x1803F0E60 (--_E-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1803F0D9C (--1-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x98);
  return a1;
}
