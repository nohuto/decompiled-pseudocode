/*
 * XREFs of SymCryptIntBitsizeOfObject @ 0x1405237B4
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfObject @ 0x1405370FC (SymCryptFdefIntBitsizeOfObject.c)
 */

__int64 SymCryptIntBitsizeOfObject()
{
  return SymCryptFdefIntBitsizeOfObject();
}
