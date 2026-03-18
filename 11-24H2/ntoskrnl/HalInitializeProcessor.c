/*
 * XREFs of HalInitializeProcessor @ 0x14053BCF0
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B4B718 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1, __int64 a2)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0, a1 != 0 ? 6 : 3, a2);
}
