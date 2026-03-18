/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1407247AC
 * Callers:
 *     PnprCompleteWake @ 0x1405A3EDC (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
