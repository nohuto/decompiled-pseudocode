/*
 * XREFs of ?SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UWindowId@UI@56@@Z @ 0x18065EFE0
 * Callers:
 *     ?SetEventHookForWindowAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAPEAX@Z @ 0x18065EF90 (-SetEventHookForWindowAsync@-$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18065EBD8 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Ini.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  void *v5; // rax
  int v7; // [rsp+188h] [rbp+10h] BYREF
  __int64 v8; // [rsp+190h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x140uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__InitCoro_2(
    &v7,
    (__int64)v5 + 112,
    a2,
    &v8,
    a1);
  return a2;
}
