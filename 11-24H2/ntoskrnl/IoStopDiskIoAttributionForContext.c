/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1402C81A4
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x14085E900 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1408E9FA4 (PspRemoveIoAttribution.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((unsigned __int64 *)&IopDiskIoAttributionTree, &a1->Count);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
