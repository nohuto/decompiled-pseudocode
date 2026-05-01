/*
 * XREFs of _CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync_::_1_::catch$4 @ 0x1806E60BA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x205,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           a4);
  return 0LL;
}
