/*
 * XREFs of _CSnapAssistControllerBase::EndGuidedSnapAssist_::_1_::catch$13 @ 0x1806CE80E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::EndGuidedSnapAssist_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x313,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    a4);
  return 0LL;
}
