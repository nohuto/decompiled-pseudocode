/*
 * XREFs of Command_Initialize @ 0x14000D7CC
 * Callers:
 *     Command_D0Entry @ 0x14000D5A0 (Command_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x14003D0B4 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x14000D510 (XilCoreCommand_Initialize.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     XilCommand_InitializeSecureResources @ 0x140037A5C (XilCommand_InitializeSecureResources.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall Command_Initialize(__int64 a1)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
  {
    Debug_FreAssertMsg(
      "PendingList must be empty",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      413LL);
    MicrosoftTelemetryAssertTriggeredMsgKM("PendingList is not empty on re-initialization of the command ring.");
  }
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    Debug_FreAssertMsg(
      "WaitingList must be empty",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      419LL);
    MicrosoftTelemetryAssertTriggeredMsgKM("WaitingList is not empty on re-initialization of the command ring.");
  }
  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
