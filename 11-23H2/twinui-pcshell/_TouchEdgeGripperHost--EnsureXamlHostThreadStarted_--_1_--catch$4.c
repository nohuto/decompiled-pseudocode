/*
 * XREFs of _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch$4 @ 0x180656A07
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x95,
    (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
    a4);
  v5 = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(v5 + 24) = 0;
  MicrosoftTelemetryAssertTriggeredNoArgs(v5, v6);
  return 0LL;
}
