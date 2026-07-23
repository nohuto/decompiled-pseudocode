/*
 * XREFs of SymCryptInit @ 0x1405AE418
 * Callers:
 *     HvInitializeHashLibrary @ 0x1407DE2A4 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140518538 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x67000Cu);
}
