/*
 * XREFs of _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::catch$42 @ 0x18066A927
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::catch_42(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 68) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 296),
                           (void *)0x2C3,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                           a4);
  return 0LL;
}
