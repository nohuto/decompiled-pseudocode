/*
 * XREFs of ExpFreeTablePagedPool @ 0x14084D4E4
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x14084CE30 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14093B924 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateMidLevelTable @ 0x14093BC7C (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14093CBE8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1409E5244 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1409E5458 (ExpFreeLowLevelTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR BugCheckParameter1, PVOID P, ULONG_PTR BugCheckParameter3)
{
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( BugCheckParameter1 )
    PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
}
