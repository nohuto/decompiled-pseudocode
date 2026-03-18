/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1409726F4
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x140971274 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x140972674 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140971B08 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, unsigned __int64 a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset_0(TablePagedPoolNoZero, 0, a2);
  return v4;
}
