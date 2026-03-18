/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403DCC68
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1403DCB50 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x1403436B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140343DB0 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403DCCD0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
