/*
 * XREFs of _CSnapAssistControllerBase::Initialize_::_1_::catch$32 @ 0x1802C29D8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::Initialize_::_1_::catch_32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x168,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                            a4);
  return 0LL;
}
