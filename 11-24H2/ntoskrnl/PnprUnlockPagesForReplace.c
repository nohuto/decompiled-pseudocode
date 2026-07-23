/*
 * XREFs of PnprUnlockPagesForReplace @ 0x14072E73C
 * Callers:
 *     PnprCompleteWake @ 0x1405A46DC (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
