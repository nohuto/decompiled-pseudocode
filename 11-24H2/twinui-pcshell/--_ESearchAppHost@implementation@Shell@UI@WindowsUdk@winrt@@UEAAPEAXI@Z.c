/*
 * XREFs of ??_ESearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1803B70B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1803B5918 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::`vector deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *this,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::~SearchAppHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
