/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_InitCoro$2 @ 0x180275A74
 * Callers:
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18022032C (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x180275AE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 129) = a5;
  *(_DWORD *)(a2 + 137) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[128] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1(a2);
}
