/*
 * XREFs of USBParseGetTerminalLinkFromPinId @ 0x140038414
 * Callers:
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1400382BC (USBParseGetPinIndexForStreamingTerminal.c)
 * Callees:
 *     USBParseGetInterfaceIdforPin @ 0x14002D848 (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003BD7C (USBParseGetAudioSpecificInterface.c)
 *     IsZeroBWInterface @ 0x14003C748 (IsZeroBWInterface.c)
 *     USBParseGetNextAudioInterface @ 0x14003C9EC (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseGetTerminalLinkFromPinId(__int64 a1, int a2)
{
  char v3; // bp
  unsigned int v4; // edi
  LONG InterfaceIdforPin; // eax
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbx
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 AudioSpecificInterface; // rax

  v3 = 0;
  v4 = -1;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(a1, a2, 0LL);
  if ( InterfaceIdforPin != -1 )
  {
    NextAudioInterface = USBD_ParseConfigurationDescriptorEx(
                           *(PUSB_CONFIGURATION_DESCRIPTOR *)(a1 + 40),
                           *(PVOID *)(a1 + 40),
                           InterfaceIdforPin,
                           -1,
                           1,
                           2,
                           -1);
    while ( NextAudioInterface )
    {
      if ( v3 )
        break;
      v7 = IsZeroBWInterface(*(_QWORD *)(a1 + 40), NextAudioInterface);
      v9 = *(_QWORD *)(a1 + 40);
      if ( v7 )
      {
        NextAudioInterface = (PUSB_INTERFACE_DESCRIPTOR)USBParseGetNextAudioInterface(v9, NextAudioInterface);
      }
      else
      {
        v3 = 1;
        AudioSpecificInterface = USBParseGetAudioSpecificInterface(v9, NextAudioInterface, v8, 7LL);
        if ( AudioSpecificInterface )
          v4 = *(unsigned __int8 *)(AudioSpecificInterface + 3);
      }
    }
  }
  return v4;
}
