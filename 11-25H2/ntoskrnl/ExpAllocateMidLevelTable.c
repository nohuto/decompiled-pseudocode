/*
 * XREFs of ExpAllocateMidLevelTable @ 0x140972674
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1408517C0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140971AD4 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1409726F4 (ExpAllocateTablePagedPool.c)
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
