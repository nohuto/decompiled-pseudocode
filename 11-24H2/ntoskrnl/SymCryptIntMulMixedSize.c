/*
 * XREFs of SymCryptIntMulMixedSize @ 0x1405239D0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntMulMixedSize @ 0x14052EFD4 (SymCryptFdefIntMulMixedSize.c)
 */

__int64 __fastcall SymCryptIntMulMixedSize(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntMulMixedSize(a1, a2, a3, a4, a5);
}
