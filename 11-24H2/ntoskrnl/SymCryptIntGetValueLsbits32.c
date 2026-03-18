/*
 * XREFs of SymCryptIntGetValueLsbits32 @ 0x140523940
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140528C20 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDecideModulusType @ 0x1405356C8 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1405377AC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptFixedWindowRecoding @ 0x1405390DC (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140539238 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x140522AE4 (SymCryptFdefIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptIntGetValueLsbits32(__int64 a1)
{
  return SymCryptFdefIntGetValueLsbits32(a1);
}
