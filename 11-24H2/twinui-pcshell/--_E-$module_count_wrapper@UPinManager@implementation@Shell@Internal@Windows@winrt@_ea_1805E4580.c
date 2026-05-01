/*
 * XREFs of ??_E?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805E4580
 * Callers:
 *     ??_E?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WDA@EAAPEAXI@Z @ 0x1805E44D0 (--_E-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805E3480 (--1-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@.c)
 */

winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PinManager *Block,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
