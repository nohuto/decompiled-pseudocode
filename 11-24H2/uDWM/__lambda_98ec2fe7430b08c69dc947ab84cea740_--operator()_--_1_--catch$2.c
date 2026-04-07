/*
 * XREFs of __lambda_98ec2fe7430b08c69dc947ab84cea740_::operator()_::_1_::catch$2 @ 0x1800F7807
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DEEA4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_98ec2fe7430b08c69dc947ab84cea740_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x68,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
                           a4);
  return 0LL;
}
