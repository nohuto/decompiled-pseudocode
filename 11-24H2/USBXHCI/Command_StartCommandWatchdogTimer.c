/*
 * XREFs of Command_StartCommandWatchdogTimer @ 0x14000ACE4
 * Callers:
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_StartCommandWatchdogTimer(__int64 a1)
{
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 24),
           -10000000LL);
}
