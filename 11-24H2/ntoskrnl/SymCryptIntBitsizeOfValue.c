/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1405210E4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522AF4 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x1405296F4 (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x14052FB68 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x1405315AC (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
