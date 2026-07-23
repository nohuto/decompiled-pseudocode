/*
 * XREFs of SymCryptRestoreXmm @ 0x140494460
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x1405187F0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051AB58 (SymCryptParallelSha256Process.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
