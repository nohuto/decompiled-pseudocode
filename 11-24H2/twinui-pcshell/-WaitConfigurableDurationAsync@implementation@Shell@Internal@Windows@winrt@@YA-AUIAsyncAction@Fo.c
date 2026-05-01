/*
 * XREFs of ?WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180217CA8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180283478 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v5; // eax
  int v7; // [rsp+170h] [rbp+8h] BYREF
  __int64 v8; // [rsp+180h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (unsigned int)operator new(0x130uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__InitCoro_2(
    (unsigned int)&v7,
    v5 + 112,
    a1,
    a2,
    (__int64)&v8);
  return a1;
}
