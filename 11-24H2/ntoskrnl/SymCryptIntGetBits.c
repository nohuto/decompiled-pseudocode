/*
 * XREFs of SymCryptIntGetBits @ 0x140523910
 * Callers:
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x14052EEA0 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}
