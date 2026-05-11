/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x14003BD7C
 * Callers:
 *     IsSupportedFormat @ 0x140036C0C (IsSupportedFormat.c)
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x140036DF8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCreateInterfaceList @ 0x140037378 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x140038414 (USBParseGetTerminalLinkFromPinId.c)
 *     USBDeviceStart @ 0x140040B80 (USBDeviceStart.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x14003BDFC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetNextAudioInterface @ 0x14003C9EC (USBParseGetNextAudioInterface.c)
 */

unsigned __int8 *__fastcall USBParseGetAudioSpecificInterface(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  unsigned __int64 NextAudioInterface; // rdi
  unsigned __int8 v5; // al
  unsigned __int8 *DescriptorInConfiguration; // rax

  v2 = a2;
  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  v5 = *v2;
  while ( 1 )
  {
    DescriptorInConfiguration = (unsigned __int8 *)USBParseFindDescriptorInConfiguration(a1, &v2[v5], 36LL);
    v2 = DescriptorInConfiguration;
    if ( !DescriptorInConfiguration
      || NextAudioInterface && (unsigned __int64)DescriptorInConfiguration > NextAudioInterface )
    {
      break;
    }
    v5 = *DescriptorInConfiguration;
    if ( v5 < 3u )
      break;
    if ( v2[2] == 1 )
      return v2;
  }
  return 0LL;
}
