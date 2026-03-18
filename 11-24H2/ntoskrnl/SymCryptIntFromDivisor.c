/*
 * XREFs of SymCryptIntFromDivisor @ 0x1405238C8
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14052EE78 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
