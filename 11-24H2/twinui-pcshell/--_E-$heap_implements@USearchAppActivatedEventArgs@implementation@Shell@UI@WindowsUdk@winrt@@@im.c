/*
 * XREFs of ??_E?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BB620
 * Callers:
 *     <none>
 * Callees:
 *     ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1801BB69C (--1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *__fastcall winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::`vector deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *a1,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x98);
  return a1;
}
