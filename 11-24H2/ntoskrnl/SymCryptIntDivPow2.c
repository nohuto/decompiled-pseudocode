/*
 * XREFs of SymCryptIntDivPow2 @ 0x1405211A0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521F1C (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x1405304B0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x14053357C (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x1405336D8 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x14052922C (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
