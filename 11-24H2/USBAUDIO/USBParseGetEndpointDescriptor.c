/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x14003C2DC
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x140036AD8 (USBParseConvertInterfaceToDataRange.c)
 *     IsZeroBWInterface @ 0x14003BFE8 (IsZeroBWInterface.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x14003B69C (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetNextAudioInterface @ 0x14003C28C (USBParseGetNextAudioInterface.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, (char *)a2, a3 != 0 ? 37 : 5, 7uLL);
  if ( result && NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
    return 0LL;
  return result;
}
