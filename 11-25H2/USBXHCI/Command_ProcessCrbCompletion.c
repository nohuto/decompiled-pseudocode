/*
 * XREFs of Command_ProcessCrbCompletion @ 0x14002F8F8
 * Callers:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostReset @ 0x14003D0B4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x14003D33C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_ProcessCrbCompletion(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 40))();
}
