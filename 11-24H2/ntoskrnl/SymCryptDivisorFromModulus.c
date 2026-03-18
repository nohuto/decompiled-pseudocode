/*
 * XREFs of SymCryptDivisorFromModulus @ 0x140523754
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefDivisorFromModulus @ 0x1405357E4 (SymCryptFdefDivisorFromModulus.c)
 */

__int64 SymCryptDivisorFromModulus()
{
  return SymCryptFdefDivisorFromModulus();
}
