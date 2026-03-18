/*
 * XREFs of HalpGetCmosData @ 0x14054FF0C
 * Callers:
 *     HalReadBootRegister @ 0x140B40A6C (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x14042D6C4 (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
