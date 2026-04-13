/*
 * XREFs of __lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator()_::_1_::catch$7 @ 0x1800BA789
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180034E78 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x24D,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
    a4);
  return 0LL;
}
