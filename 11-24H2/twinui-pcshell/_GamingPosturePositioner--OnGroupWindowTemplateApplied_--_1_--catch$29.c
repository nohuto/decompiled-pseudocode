/*
 * XREFs of _GamingPosturePositioner::OnGroupWindowTemplateApplied_::_1_::catch$29 @ 0x1806F17FD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::OnGroupWindowTemplateApplied_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 600),
    (void *)0xA72,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
    a4);
  return 0LL;
}
