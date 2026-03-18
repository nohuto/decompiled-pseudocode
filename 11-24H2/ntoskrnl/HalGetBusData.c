/*
 * XREFs of HalGetBusData @ 0x14053D660
 * Callers:
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140488FB0 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
