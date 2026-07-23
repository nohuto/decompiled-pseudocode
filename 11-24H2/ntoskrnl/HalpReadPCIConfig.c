/*
 * XREFs of HalpReadPCIConfig @ 0x1403AA68C
 * Callers:
 *     HalpGetPCIData @ 0x1403A99D4 (HalpGetPCIData.c)
 *     HalpValidPCISlot @ 0x1403AA71C (HalpValidPCISlot.c)
 *     HalpSetPCIData @ 0x140489544 (HalpSetPCIData.c)
 * Callees:
 *     HalpValidPCISlot @ 0x1403AA71C (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
