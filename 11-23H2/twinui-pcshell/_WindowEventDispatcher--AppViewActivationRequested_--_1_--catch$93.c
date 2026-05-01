/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::catch$93 @ 0x1804BF847
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::catch_93(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 792),
    (void *)0x343,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
    a4);
  return 0LL;
}
