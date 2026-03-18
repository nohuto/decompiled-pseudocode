/*
 * XREFs of Command_ProcessCrbCompletion @ 0x14002EC48
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     Command_ControllerResetPostReset @ 0x14003CFA4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x14003D22C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_ProcessCrbCompletion(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 40))();
}
