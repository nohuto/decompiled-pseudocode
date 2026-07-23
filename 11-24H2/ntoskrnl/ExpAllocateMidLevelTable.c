/*
 * XREFs of ExpAllocateMidLevelTable @ 0x14094D750
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14094D3F8 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  _QWORD *LowLevelTable; // rax

  TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
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
