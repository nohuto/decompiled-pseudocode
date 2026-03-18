/*
 * XREFs of SymCryptInit @ 0x1405B14A8
 * Callers:
 *     HvInitializeHashLibrary @ 0x1407DDD54 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC68 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670009u);
}
