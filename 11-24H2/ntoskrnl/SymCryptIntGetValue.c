/*
 * XREFs of SymCryptIntGetValue @ 0x140521240
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntGetValue @ 0x1405317A8 (SymCryptFdefIntGetValue.c)
 */

__int64 SymCryptIntGetValue()
{
  return SymCryptFdefIntGetValue();
}
