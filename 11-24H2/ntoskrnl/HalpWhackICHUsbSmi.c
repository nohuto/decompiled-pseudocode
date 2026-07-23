/*
 * XREFs of HalpWhackICHUsbSmi @ 0x14055FF00
 * Callers:
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x1403A7A90 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalpWhackICHUsbSmi(ULONG BusNumber, ULONG SlotNumber)
{
  ULONG result; // eax
  __int16 v3; // dx
  unsigned __int32 v4; // eax
  int Buffer; // [rsp+50h] [rbp+18h] BYREF

  Buffer = 0;
  result = HalGetBusDataByOffset(PCIConfiguration, BusNumber, SlotNumber, &Buffer, 0x40u, 4u);
  v3 = Buffer;
  if ( Buffer )
  {
    LOWORD(Buffer) = Buffer & 0xFFFC;
    v4 = __indword((v3 & 0xFFFC) + 48);
    result = v4 & 0xFFFFFFF7;
    __outdword(Buffer + 48, result);
  }
  return result;
}
