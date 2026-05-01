/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1805D5330
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1805D52C8 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$basic_string_view@GU?$char_traits@G@std@@@8@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1805CD624 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(
        char *a1)
{
  int v2; // eax
  char *v3; // rsi
  __int64 v4; // rdx

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_5;
      case 2:
        *((_QWORD *)a1 + 2) = L"OnTaskbarSettingChanged";
        *((_QWORD *)a1 + 3) = 23LL;
        v2 = *(_DWORD *)(a1 + 121);
        v3 = a1 + 32;
        *((_QWORD *)a1 + 4) = off_180756DC8;
        *((_DWORD *)a1 + 10) = v2;
        *((_QWORD *)a1 + 11) = a1 + 32;
        *((_OWORD *)a1 + 6) = *((_OWORD *)a1 + 1);
        winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
          *(_QWORD *)(a1 + 113),
          (__int64)(a1 + 32),
          (__int64)(a1 + 96),
          0x1F40u);
        if ( *((_QWORD *)a1 + 11) )
        {
          LOBYTE(v4) = *((_QWORD *)a1 + 11) != (_QWORD)v3;
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 11) + 32LL))(*((_QWORD *)a1 + 11), v4);
        }
LABEL_5:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x90);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
