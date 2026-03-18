/*
 * XREFs of PnprUnlockPagesForReplace @ 0x14073072C
 * Callers:
 *     PnprCompleteWake @ 0x1405A76EC (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
