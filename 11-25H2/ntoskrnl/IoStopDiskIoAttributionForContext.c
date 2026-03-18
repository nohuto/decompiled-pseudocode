/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x14036D660
 * Callers:
 *     PspRemoveIoAttribution @ 0x1408DABD8 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140A3B030 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x140A3B3A4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((unsigned __int64)&IopDiskIoAttributionTree, &a1->Count);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
