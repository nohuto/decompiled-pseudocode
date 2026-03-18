/*
 * XREFs of SymCryptIntSetValueUint64 @ 0x140523A38
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x1405251DC (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptFdefIntSetValueUint64 @ 0x1405374BC (SymCryptFdefIntSetValueUint64.c)
 */

__int64 SymCryptIntSetValueUint64()
{
  return SymCryptFdefIntSetValueUint64();
}
