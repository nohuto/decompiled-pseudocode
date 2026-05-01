/*
 * XREFs of _ViewEventArgsForWindowingSettings::SetNonShownViews_::_1_::catch$3 @ 0x1804C9F6E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ViewEventArgsForWindowingSettings::SetNonShownViews_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x4A6,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           a4);
  return 0LL;
}
