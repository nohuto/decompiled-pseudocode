/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14048D93C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14051AD40 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x14051AF20 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051D288 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x14052F664 (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x14052F7B0 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x1405356C8 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModDivSmallPow2 @ 0x140535A78 (SymCryptFdefModDivSmallPow2.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140536E20 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
