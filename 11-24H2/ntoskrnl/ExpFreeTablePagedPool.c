/*
 * XREFs of ExpFreeTablePagedPool @ 0x1408497A4
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14094CF14 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14094D750 (ExpAllocateMidLevelTable.c)
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1409DFEB8 (ExpFreeLowLevelTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR BugCheckParameter1, PVOID P, ULONG_PTR BugCheckParameter3)
{
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( BugCheckParameter1 )
    PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
}
