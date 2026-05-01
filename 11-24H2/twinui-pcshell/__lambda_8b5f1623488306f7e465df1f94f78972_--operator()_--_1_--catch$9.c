/*
 * XREFs of __lambda_8b5f1623488306f7e465df1f94f78972_::operator()_::_1_::catch$9 @ 0x1806FF432
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_8b5f1623488306f7e465df1f94f78972_::operator()_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x120,
                           (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
                           a4);
  return 0LL;
}
