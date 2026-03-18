/*
 * XREFs of PnprCompleteWake @ 0x1405A3EDC
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1407247AC (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
