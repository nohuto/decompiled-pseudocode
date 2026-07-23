/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403BC958
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1403BC840 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403BC9C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
