/*
 * XREFs of SymCryptIntDivPow2 @ 0x140523888
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140524604 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x1405390DC (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140539238 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x14052ED84 (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
