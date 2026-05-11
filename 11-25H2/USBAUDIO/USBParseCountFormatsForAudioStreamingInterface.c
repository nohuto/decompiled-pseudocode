/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x140037268
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x140037B70 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     IsSupportedFormat @ 0x140036C0C (IsSupportedFormat.c)
 *     IsZeroBWInterface @ 0x14003C748 (IsZeroBWInterface.c)
 *     USBParseGetNextAudioInterface @ 0x14003C9EC (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // ebp
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rsi
  __int64 v11; // r8

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    do
    {
      if ( !(unsigned __int8)IsZeroBWInterface(StartPosition, NextAudioInterface)
        && IsSupportedFormat((__int64)StartPosition, (__int64)NextAudioInterface, v11) )
      {
        ++*a3;
        ++*a4;
        v9 = 0;
        *a5 = 2;
      }
      NextAudioInterface = (PUSB_INTERFACE_DESCRIPTOR)USBParseGetNextAudioInterface(StartPosition, NextAudioInterface);
    }
    while ( NextAudioInterface );
  }
  else if ( USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, InterfaceNumber, -1, 1, 3, -1) )
  {
    ++*a3;
    v9 = 0;
    *a5 = 3;
  }
  return v9;
}
