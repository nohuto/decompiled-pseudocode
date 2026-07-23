/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x14094D498
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14094D3F8 (ExpAllocateLowLevelTable.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x14094D60C (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateMidLevelTable @ 0x14094D750 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  _QWORD *LowLevelTable; // rax
  __int64 TablePagedPool; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v22 = 0LL;
  v5 = *a1;
  v6 = v2;
  v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v6 & 3;
  if ( !v8 )
  {
    v14 = ExpAllocateMidLevelTable(a1, &v22, *a1);
    if ( !v14 )
      return 0;
    *(_QWORD *)(v14 + 8) = *(_QWORD *)v14;
    *(_QWORD *)v14 = v7;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, v14 | 1);
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    v15 = (unsigned int)v5 >> 19;
    if ( (unsigned int)v15 >= 0x80 )
      return 0;
    v16 = *(_QWORD *)(v7 + 8 * v15);
    v17 = (unsigned int)v15;
    if ( v16 )
    {
      LowLevelTable = ExpAllocateLowLevelTable((__int64)a1, *a1);
      v22 = LowLevelTable;
      v12 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v16 + 8 * ((v5 >> 10) & 0x1FF)) = LowLevelTable;
        goto LABEL_6;
      }
      return 0;
    }
    v21 = ExpAllocateMidLevelTable(a1, &v22, *a1);
    if ( !v21 )
      return 0;
    *(_QWORD *)(v7 + 8 * v17) = v21;
LABEL_9:
    v12 = v22;
    goto LABEL_6;
  }
  v9 = (unsigned int)v5 >> 10;
  if ( (unsigned int)v9 >= 0x200 )
  {
    TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 1024LL);
    if ( !TablePagedPool )
      return 0;
    v20 = ExpAllocateMidLevelTable(a1, &v22, v5);
    if ( !v20 )
    {
      ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), (PVOID)TablePagedPool, 0x400uLL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v7;
    *(_QWORD *)(TablePagedPool + 8) = v20;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
    goto LABEL_9;
  }
  v10 = ExpAllocateLowLevelTable((__int64)a1, (unsigned int)v5);
  v22 = v10;
  v12 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v7 + 8 * v9) = v10;
LABEL_6:
    LOBYTE(v11) = a2 != 0;
    ExpInsertLowLevelTableIntoFreeList(a1, v12, a2, v11);
    return 1;
  }
  return 0;
}
