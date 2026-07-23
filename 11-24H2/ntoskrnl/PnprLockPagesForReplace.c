/*
 * XREFs of PnprLockPagesForReplace @ 0x14072DE30
 * Callers:
 *     PnprQuiesce @ 0x1405A4C78 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 */

void PnprLockPagesForReplace()
{
  MmLockPagableSectionByHandle(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
