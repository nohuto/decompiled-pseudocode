/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::catch$95 @ 0x1806968C6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::catch_95(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(a2 + 60) = 0;
  **(_QWORD **)(a2 + 64) = *(_QWORD *)(a2 + 56);
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 936),
    (void *)0x9FD,
    (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
