/*
 * XREFs of ??_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1801BB660
 * Callers:
 *     <none>
 * Callees:
 *     ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1801BB69C (--1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::`scalar deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *this,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
