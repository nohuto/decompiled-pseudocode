/*
 * XREFs of SymCryptDivisorFromModulus @ 0x14052106C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefDivisorFromModulus @ 0x14052FC84 (SymCryptFdefDivisorFromModulus.c)
 */

__int64 SymCryptDivisorFromModulus()
{
  return SymCryptFdefDivisorFromModulus();
}
