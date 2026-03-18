/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14093BCFC
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x14084CE30 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14093B924 (ExpSetHandleExtraInfo.c)
 *     ExpAllocateMidLevelTable @ 0x14093BC7C (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14093CBE8 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14093C154 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset_0(TablePagedPoolNoZero, 0, a2);
  return v4;
}
