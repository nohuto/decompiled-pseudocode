/*
 * XREFs of __lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator()_::_1_::catch$22 @ 0x1807065D6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator()_::_1_::catch_22(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x16E,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
    a4);
  return 0LL;
}
