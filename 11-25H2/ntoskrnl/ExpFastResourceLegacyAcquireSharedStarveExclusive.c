/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140489FF8
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402D7030 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14048A060 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rdi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v3 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 || ExIsFastResourceHeldExclusive(BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
