/*
 * XREFs of SymCryptIntSetValueUint64 @ 0x140521350
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE5C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522AF4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptFdefIntSetValueUint64 @ 0x14053195C (SymCryptFdefIntSetValueUint64.c)
 */

__int64 SymCryptIntSetValueUint64()
{
  return SymCryptFdefIntSetValueUint64();
}
