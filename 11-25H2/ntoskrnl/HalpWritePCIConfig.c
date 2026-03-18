/*
 * XREFs of HalpWritePCIConfig @ 0x14048FB0C
 * Callers:
 *     HalpValidPCISlot @ 0x14028182C (HalpValidPCISlot.c)
 *     HalpSetPCIData @ 0x14048FA14 (HalpSetPCIData.c)
 * Callees:
 *     HalpValidPCISlot @ 0x14028182C (HalpValidPCISlot.c)
 *     HalpPCIConfig @ 0x140282B20 (HalpPCIConfig.c)
 */

__int64 __fastcall HalpWritePCIConfig(
        unsigned __int16 a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned int a6)
{
  char v8; // si
  __int64 v10; // rdx

  v8 = a2;
  if ( !HalpValidPCISlot(a1, a2, a3) )
    return 0LL;
  LOBYTE(v10) = v8;
  HalpPCIConfig(a1, v10, a3, a4, a5, a6, 1);
  return a6;
}
