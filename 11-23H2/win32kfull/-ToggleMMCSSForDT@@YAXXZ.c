/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C01BE028
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C01E2ED0 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 46);
  KeSetEvent(qword_1C035E188, 1, 0);
}
