/*
 * XREFs of ExpFreeTablePagedPool @ 0x1408517C0
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x140971274 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x140972674 (ExpAllocateMidLevelTable.c)
 *     ExpFreeHandleTable @ 0x1409729AC (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140972BC0 (ExpFreeLowLevelTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR BugCheckParameter1, PVOID P, ULONG_PTR BugCheckParameter3)
{
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( BugCheckParameter1 )
    PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
}
