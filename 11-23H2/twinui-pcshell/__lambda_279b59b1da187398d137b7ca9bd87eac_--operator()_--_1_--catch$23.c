/*
 * XREFs of __lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::catch$23 @ 0x1802D8ABC
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 456),
    (void *)0x59,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    a4);
  return 0LL;
}
