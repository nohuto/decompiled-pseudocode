/*
 * XREFs of _VoiceAssistantPositioner::CreateAppViewOperationToUpdateView_::_1_::catch$8 @ 0x1806F1C3E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall VoiceAssistantPositioner::CreateAppViewOperationToUpdateView_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 424),
    (void *)0x2E4,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    a4);
  return 0LL;
}
