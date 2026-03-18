/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1405237CC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x1405251DC (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x14052F24C (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x1405356C8 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x14053710C (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
