/*
 * XREFs of _CSnapAssistControllerBase::_SnapAssistTriggered_::_1_::catch$9 @ 0x1806F6E9F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::_SnapAssistTriggered_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 200),
                           (void *)0x387,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                           a4);
  return 0LL;
}
