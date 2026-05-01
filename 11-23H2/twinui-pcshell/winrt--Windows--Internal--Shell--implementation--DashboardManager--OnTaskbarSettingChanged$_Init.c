/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1802402A8
 * Callers:
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x180240490 (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x180240370 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 82) = a5;
  *(_DWORD *)(a2 + 90) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 81) = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(a2);
}
