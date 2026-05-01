/*
 * XREFs of ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1805D5520
 * Callers:
 *     ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805D80C4 (-TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1805D52C8 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  char *v5; // rax
  int v7; // [rsp+D8h] [rbp+10h] BYREF
  int v8; // [rsp+E0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x90uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__InitCoro_2(
    &v7,
    v5,
    a2,
    &v8,
    a1);
  return a2;
}
