/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x14003B69C
 * Callers:
 *     USBParseGetInterfaceIdforPin @ 0x14002D848 (USBParseGetInterfaceIdforPin.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseGetUnit @ 0x14002E3D4 (USBParseGetUnit.c)
 *     IsSupportedFormat @ 0x1400368EC (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x140036AD8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x140037A94 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D58 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x140037F9C (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x14003C2DC (USBParseGetEndpointDescriptor.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptorInConfiguration(
        unsigned __int16 *a1,
        char *a2,
        LONG a3,
        unsigned __int64 a4)
{
  PUSB_COMMON_DESCRIPTOR v6; // r11
  __int64 v8; // rdx
  PUSB_COMMON_DESCRIPTOR v9; // rax

  v6 = 0LL;
  v8 = a1[1];
  if ( a2 + 2 < (char *)a1 + v8 )
  {
    v9 = USBD_ParseDescriptors(a1, v8, a2, a3);
    v6 = v9;
    if ( v9 )
    {
      if ( v9->bLength < a4 )
        return 0LL;
    }
  }
  return v6;
}
