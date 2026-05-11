/*
 * XREFs of USBParseGetNextAudioInterface @ 0x14003C9EC
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x140036DF8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x140037268 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x140038414 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003BD7C (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003C0D4 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetEndpointDescriptor @ 0x14003CA3C (USBParseGetEndpointDescriptor.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)a2;
}
