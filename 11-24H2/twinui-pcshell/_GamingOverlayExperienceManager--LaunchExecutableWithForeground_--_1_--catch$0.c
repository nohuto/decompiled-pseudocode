/*
 * XREFs of _GamingOverlayExperienceManager::LaunchExecutableWithForeground_::_1_::catch$0 @ 0x1806E2C3E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::LaunchExecutableWithForeground_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 200),
                           (void *)0xDAF,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                           a4);
  return 0LL;
}
