/*
 * XREFs of SymCryptRestoreYmm @ 0x1405B14C4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14051D288 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14051AD24 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall SymCryptRestoreYmm(struct _XSTATE_SAVE *a1)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}
