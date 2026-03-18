/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14048E708
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1405185C0 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1405187A0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051AB08 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x14052CEB4 (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x14052D000 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x140532F18 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModDivSmallPow2 @ 0x1405332C8 (SymCryptFdefModDivSmallPow2.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140534670 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PdcCreateWatchdogAroundClientCall();
}
