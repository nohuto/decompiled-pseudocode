/*
 * XREFs of XilCommand_WriteDoorbell @ 0x14002C2D0
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_SendRequestToRingDoorbell @ 0x14003EE7C (XilCommand_SendRequestToRingDoorbell.c)
 */

_DWORD *__fastcall XilCommand_WriteDoorbell(__int64 a1)
{
  _DWORD *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(a1 + 152) )
    return (_DWORD *)XilCommand_SendRequestToRingDoorbell(a1 + 136);
  result = *(_DWORD **)(a1 + 152);
  *result = 0;
  _InterlockedOr(v2, 0);
  return result;
}
