/*
 * XREFs of SymCryptSaveXmm @ 0x1404881D4
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1405187F0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051AB58 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 SymCryptSaveXmm()
{
  return PdcCreateWatchdogAroundClientCall();
}
