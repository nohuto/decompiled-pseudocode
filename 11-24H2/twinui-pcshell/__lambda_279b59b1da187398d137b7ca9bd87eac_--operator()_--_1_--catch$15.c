/*
 * XREFs of __lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::catch$15 @ 0x1806CF855
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 504),
    (void *)0x59,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    a4);
  return 0LL;
}
