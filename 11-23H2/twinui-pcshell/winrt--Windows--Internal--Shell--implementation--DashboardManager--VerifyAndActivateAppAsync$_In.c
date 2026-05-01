/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_InitCoro$2 @ 0x1802465A0
 * Callers:
 *     ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1802471F4 (-VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 780) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[779] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1(a2);
}
