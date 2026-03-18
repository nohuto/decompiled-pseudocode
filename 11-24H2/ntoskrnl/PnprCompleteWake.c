/*
 * XREFs of PnprCompleteWake @ 0x1405A76EC
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x14073072C (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
