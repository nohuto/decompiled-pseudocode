/*
 * XREFs of SymCryptRestoreXmm @ 0x1404999F8
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x14051AF20 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14051D288 (SymCryptParallelSha256Process.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140529B14 (SymCryptRsaSignVerifyPct.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
