/*
 * XREFs of ExpAllocateMidLevelTable @ 0x14093BC7C
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14093CBE8 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x14084D4E4 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x14093BCFC (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14093C120 (ExpAllocateLowLevelTable.c)
 */

__int64 *__fastcall ExpAllocateMidLevelTable(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *TablePagedPool; // rdi
  __int64 LowLevelTable; // rax

  TablePagedPool = (__int64 *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x1000uLL);
  }
  return 0LL;
}
