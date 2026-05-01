/*
 * XREFs of _AppViewDataSourceAdapter::ReevaluateTabItems_::_1_::catch$44 @ 0x18078F271
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewDataSourceAdapter::ReevaluateTabItems_::_1_::catch_44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x126,
    (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
    a4);
  return 0LL;
}
