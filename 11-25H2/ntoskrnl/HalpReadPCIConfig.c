/*
 * XREFs of HalpReadPCIConfig @ 0x14028179C
 * Callers:
 *     HalpValidPCISlot @ 0x14028182C (HalpValidPCISlot.c)
 *     HalpGetPCIData @ 0x140470DD8 (HalpGetPCIData.c)
 *     HalpSetPCIData @ 0x14048FA14 (HalpSetPCIData.c)
 * Callees:
 *     HalpValidPCISlot @ 0x14028182C (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x140282B20 (HalpPCIConfig.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpReadPCIConfig(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int Size)
{
  if ( (unsigned __int8)HalpValidPCISlot() )
  {
    HalpPCIConfig(a1);
    return Size;
  }
  else
  {
    memset_0(a4, 255, Size);
    return 0LL;
  }
}
