/*
 * XREFs of __lambda_0f325790d88d3e0e1d8faff7704602cc_::operator()_::_1_::catch$28 @ 0x1800BA136
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A1D0 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator()_::_1_::catch_28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 632),
                           (void *)0x1A7,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           a4);
  return 0LL;
}
