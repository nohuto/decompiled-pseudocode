/*
 * XREFs of __lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator()_::_1_::catch$34 @ 0x180789302
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator()_::_1_::catch_34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 224) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0x6E,
                            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
                            a4);
  return 0LL;
}
