/*
 * XREFs of ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805E45B8
 * Callers:
 *     ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z @ 0x1805E44E0 (--_EPinManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805E38B8 (--1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
