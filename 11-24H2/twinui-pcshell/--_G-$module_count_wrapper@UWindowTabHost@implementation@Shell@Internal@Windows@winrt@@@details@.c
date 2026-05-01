/*
 * XREFs of ??_G?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1802D1000
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WFA@EAAPEAXI@Z @ 0x18057D810 (--_E-$heap_implements@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ??1?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801F8D30 (--1-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowTabHost *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x370);
  return a1;
}
