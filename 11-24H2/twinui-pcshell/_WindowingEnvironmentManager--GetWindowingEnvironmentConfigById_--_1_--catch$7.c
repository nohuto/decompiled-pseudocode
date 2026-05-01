/*
 * XREFs of _WindowingEnvironmentManager::GetWindowingEnvironmentConfigById_::_1_::catch$7 @ 0x1806EBC38
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigById_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xA0,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           a4);
  return 0LL;
}
