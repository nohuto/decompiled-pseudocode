/*
 * XREFs of HalpWritePCIConfig @ 0x14048F42C
 * Callers:
 *     HalpValidPCISlot @ 0x1402656FC (HalpValidPCISlot.c)
 *     HalpSetPCIData @ 0x14048F334 (HalpSetPCIData.c)
 * Callees:
 *     HalpValidPCISlot @ 0x1402656FC (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x140265960 (HalpPCIConfig.c)
 */

__int64 __fastcall HalpWritePCIConfig(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rdx

  if ( !HalpValidPCISlot(a1, a2, a3) )
    return 0LL;
  LOBYTE(v10) = a2;
  HalpPCIConfig(a1, v10, a3, a4, a5, a6, 1);
  return a6;
}
