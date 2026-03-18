/*
 * XREFs of Etw_CommandCompleteError @ 0x14004EFBC
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostReset @ 0x14003D0B4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x14003D33C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x140009CA8 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  char v6; // [rsp+38h] [rbp-10h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
  {
    v6 = *(_BYTE *)(a3 + 60);
    return McTemplateK0ppb16qu_EtwWriteTransfer(
             a3 + 24,
             &USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             v6);
  }
  return result;
}
