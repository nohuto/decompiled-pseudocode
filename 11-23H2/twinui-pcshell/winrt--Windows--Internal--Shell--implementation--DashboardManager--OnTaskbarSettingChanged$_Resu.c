/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x180240370
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1802402A8 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 * Callees:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x180187594 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x1801BEC50 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_6e64461b6651328ea871cea77f237b57__0_ @ 0x1806936F8 (std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtens_ea_1806936F8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rdx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_4;
      case 2:
        std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_6e64461b6651328ea871cea77f237b57__0_(
          a1 + 16,
          *(unsigned int *)(a1 + 90));
        winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
          *(_BYTE **)(a1 + 82),
          a1 + 16,
          0x1F40u);
        std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
          a1 + 16,
          v1);
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 80);
LABEL_4:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
