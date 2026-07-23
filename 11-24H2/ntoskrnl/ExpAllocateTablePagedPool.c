/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14094D7D0
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14094CF14 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14094D750 (ExpAllocateMidLevelTable.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14094D42C (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, ULONG_PTR a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset_0(TablePagedPoolNoZero, 0, a2);
  return v4;
}
