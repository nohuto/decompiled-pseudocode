/*
 * XREFs of SymCryptIntCopyMixedSize @ 0x14052382C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntCopyMixedSize @ 0x140537208 (SymCryptFdefIntCopyMixedSize.c)
 */

__int64 SymCryptIntCopyMixedSize()
{
  return SymCryptFdefIntCopyMixedSize();
}
