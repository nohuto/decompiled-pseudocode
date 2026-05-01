/*
 * XREFs of _UwpWindowEventDispatcher::RecoverViews_::_1_::catch$33 @ 0x1802B839B
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::RecoverViews_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x8F2,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
    a4);
  return 0LL;
}
