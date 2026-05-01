/*
 * XREFs of ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18022032C
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283A40 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5108 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_InitCoro$2 @ 0x180275A74 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(
        __int64 a1,
        __int64 a2,
        int a3)
{
  void *v5; // rax
  int v7; // [rsp+E8h] [rbp+10h] BYREF
  int v8; // [rsp+F0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0xA0uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
