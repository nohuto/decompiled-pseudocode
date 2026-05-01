/*
 * XREFs of _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::catch$18 @ 0x1806EC7C2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncher::LauncherShowRequested__ResumeCoro_1_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x7C6,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    a4);
  return 0LL;
}
