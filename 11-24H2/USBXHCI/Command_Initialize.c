/*
 * XREFs of Command_Initialize @ 0x140019F40
 * Callers:
 *     Command_D0Entry @ 0x140019D14 (Command_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x14003CFA4 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilCommand_InitializeSecureResources @ 0x140018DD4 (XilCommand_InitializeSecureResources.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     XilCoreCommand_Initialize @ 0x140019FF0 (XilCoreCommand_Initialize.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140056D8C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall Command_Initialize(__int64 a1)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
  {
    Debug_FreAssertMsg(
      (__int64)"PendingList must be empty",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      413);
    MicrosoftTelemetryAssertTriggeredMsgKM("PendingList is not empty on re-initialization of the command ring.");
  }
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    Debug_FreAssertMsg(
      (__int64)"WaitingList must be empty",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      419);
    MicrosoftTelemetryAssertTriggeredMsgKM("WaitingList is not empty on re-initialization of the command ring.");
  }
  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources(a1 + 136);
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
