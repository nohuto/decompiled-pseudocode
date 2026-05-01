/*
 * XREFs of __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::catch$17 @ 0x1806E9A34
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0xCD,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           a4);
  return 0LL;
}
