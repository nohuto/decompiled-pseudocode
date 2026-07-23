/*
 * XREFs of SymCryptRestoreYmm @ 0x1405AE434
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14051AB58 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1405185F4 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall SymCryptRestoreYmm(struct _XSTATE_SAVE *a1)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
