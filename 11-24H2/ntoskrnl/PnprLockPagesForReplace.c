/*
 * XREFs of PnprLockPagesForReplace @ 0x14072FE20
 * Callers:
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 */

void PnprLockPagesForReplace()
{
  MmLockPagableSectionByHandle(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
