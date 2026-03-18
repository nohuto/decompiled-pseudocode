/*
 * XREFs of SymCryptIntGetValue @ 0x140523928
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntGetValue @ 0x140537308 (SymCryptFdefIntGetValue.c)
 */

__int64 SymCryptIntGetValue()
{
  return SymCryptFdefIntGetValue();
}
