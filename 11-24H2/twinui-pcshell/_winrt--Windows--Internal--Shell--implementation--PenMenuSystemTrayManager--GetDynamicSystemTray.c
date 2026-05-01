/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::GetDynamicSystemTrayHeightForMonitor_::_1_::catch$2 @ 0x1806E745C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::GetDynamicSystemTrayHeightForMonitor_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x74,
                           (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp",
                           a4);
  return 0LL;
}
