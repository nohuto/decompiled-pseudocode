/*
 * XREFs of SymCryptDivisorFromModulus @ 0x140520FD0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefDivisorFromModulus @ 0x140533034 (SymCryptFdefDivisorFromModulus.c)
 */

__int64 SymCryptDivisorFromModulus()
{
  return SymCryptFdefDivisorFromModulus();
}
