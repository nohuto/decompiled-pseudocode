/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::catch$40 @ 0x1806F2668
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::catch_40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 312),
    (void *)0x51B,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    a4);
  return 0LL;
}
