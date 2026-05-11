/*
 * XREFs of USBParseFindDescriptor @ 0x1400377CC
 * Callers:
 *     USBParseGetInterfaceIdforPin @ 0x14002D848 (USBParseGetInterfaceIdforPin.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseGetUnit @ 0x14002E3D4 (USBParseGetUnit.c)
 *     USBParseConvertControlUnits @ 0x140036A00 (USBParseConvertControlUnits.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptor(__int64 a1, void *a2, ULONG a3, void *a4)
{
  PUSB_COMMON_DESCRIPTOR v4; // r11
  PUSB_COMMON_DESCRIPTOR v5; // rax

  v4 = 0LL;
  if ( (unsigned __int64)a2 + a3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
  {
    v5 = USBD_ParseDescriptors(a2, a3, a4, 36);
    v4 = v5;
    if ( v5 )
    {
      if ( v5->bLength < 4u )
        return 0LL;
    }
  }
  return v4;
}
