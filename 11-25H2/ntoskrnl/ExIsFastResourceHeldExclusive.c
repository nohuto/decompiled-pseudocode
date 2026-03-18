/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x1402944B0
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140294330 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140489FF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     DifExIsFastResourceHeldExclusiveWrapper @ 0x1406133D0 (DifExIsFastResourceHeldExclusiveWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_QWORD *)(BugCheckParameter2 + 80) == (_QWORD)KeGetCurrentThread();
}
