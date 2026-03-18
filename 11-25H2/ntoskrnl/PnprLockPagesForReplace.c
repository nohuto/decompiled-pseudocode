/*
 * XREFs of PnprLockPagesForReplace @ 0x140723EA0
 * Callers:
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 */

void PnprLockPagesForReplace()
{
  MmLockPagableSectionByHandle(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
