/*
 * XREFs of HalpReadPCIConfig @ 0x14026566C
 * Callers:
 *     HalpValidPCISlot @ 0x1402656FC (HalpValidPCISlot.c)
 *     HalpGetPCIData @ 0x14026640C (HalpGetPCIData.c)
 *     HalpSetPCIData @ 0x14048F334 (HalpSetPCIData.c)
 * Callees:
 *     HalpValidPCISlot @ 0x1402656FC (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x140265960 (HalpPCIConfig.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpReadPCIConfig(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        void *a4,
        int a5,
        unsigned int Size)
{
  __int64 v10; // rdx

  if ( (unsigned __int8)HalpValidPCISlot() )
  {
    LOBYTE(v10) = a2;
    HalpPCIConfig(a1, v10, a3, a4, a5, Size, 0);
    return Size;
  }
  else
  {
    memset_0(a4, 255, Size);
    return 0LL;
  }
}
