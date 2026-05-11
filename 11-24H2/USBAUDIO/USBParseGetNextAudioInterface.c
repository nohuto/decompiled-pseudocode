/*
 * XREFs of USBParseGetNextAudioInterface @ 0x14003C28C
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x140036AD8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x140036F48 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1400380F4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B974 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetEndpointDescriptor @ 0x14003C2DC (USBParseGetEndpointDescriptor.c)
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
