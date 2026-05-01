/*
 * XREFs of ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180282C48
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5108 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D8510 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1805D8510.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x1805D9AF0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaun_ea_1805D9AF0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$basic_string_view@GU?$char_traits@G@std@@@8@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1805CD624 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  int v1; // ebx
  const char *v2; // r9
  _QWORD *v3; // rdx
  int v4[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v5[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_QWORD *)v4 = L"UpdatePrelaunchSettings";
  *(_QWORD *)&v4[2] = 23LL;
  v5[0] = off_180756E28;
  v5[1] = this;
  v6 = v5;
  try
  {
    v1 = winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
           this,
           v5,
           v4,
           30000LL);
    if ( v6 )
    {
      v3 = v5;
      LOBYTE(v3) = v6 != v5;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
    }
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB10,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB12,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v2);
  }
}
