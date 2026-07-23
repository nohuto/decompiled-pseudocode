/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x1407FCD8C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14068AE74 (MiClearPartitionPageBitMap.c)
 *     MiFinishChildPartitionHotAdd @ 0x14068B460 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14068C280 (MiPartitionDeleteMemoryNode.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068C348 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x14068CAF4 (MiUpdatePartitionMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiConvertInitialMemoryBlock @ 0x1407E974C (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x1407E9860 (MiCreateNodeLists.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // r15
  int v9; // ebx
  int v10; // edi
  __int64 Pool; // rax
  void *v12; // rsi
  _QWORD *k; // rbx
  _QWORD *j; // rax
  _QWORD **v15; // rax
  __int64 v16; // r10
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-79h] BYREF
  __int128 v20; // [rsp+30h] [rbp-71h]
  __int64 v21; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v22[5]; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-31h]
  __int64 v24; // [rsp+78h] [rbp-29h]
  unsigned __int16 *v25[10]; // [rsp+98h] [rbp-9h] BYREF

  v19 = 0LL;
  v21 = 0LL;
  memset_0(v25, 0, 0x48uLL);
  memset_0(v22, 0, 0x48uLL);
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v2 = *(_QWORD **)(a1 + 24);
    i = 0LL;
    while ( v2 )
    {
      i = v2;
      v2 = (_QWORD *)*v2;
    }
    while ( i )
    {
      v4 = (_QWORD **)i[1];
      v5 = (__int64)i;
      v6 = i;
      if ( v4 )
      {
        v7 = *v4;
        for ( i = (_QWORD *)i[1]; v7; v7 = (_QWORD *)*v7 )
          i = v7;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v6 )
            break;
          v6 = i;
        }
      }
      MiActOnPartitionNodePages(v5, 7u, 0, v22);
    }
    v8 = v24;
    v9 = v23;
    v10 = 1;
    v20 = 0LL;
    if ( !v24 )
      goto LABEL_35;
    if ( v23 <= 0x7FFFFFFFFFFFFFFLL )
    {
      Pool = MiAllocatePool(0x40uLL, 16 * (v23 + 1), 1817013581);
      v12 = (void *)Pool;
      if ( Pool )
      {
        v25[8] = (unsigned __int16 *)Pool;
        *(_DWORD *)Pool = v9;
        k = 0LL;
        *(_QWORD *)(Pool + 8) = v8;
        for ( j = *(_QWORD **)(a1 + 24); j; j = (_QWORD *)*j )
          k = j;
        while ( k )
        {
          v15 = (_QWORD **)k[1];
          v16 = (__int64)k;
          v17 = k;
          if ( v15 )
          {
            v18 = *v15;
            for ( k = (_QWORD *)k[1]; v18; v18 = (_QWORD *)*v18 )
              k = v18;
          }
          else
          {
            while ( 1 )
            {
              k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !k || (_QWORD *)*k == v17 )
                break;
              v17 = k;
            }
          }
          MiActOnPartitionNodePages(v16, 8u, 0, v25);
        }
        *(_QWORD *)&v20 = MiConvertInitialMemoryBlock(a1, (__int64)v12);
        ExFreePoolWithTag(v12, 0);
        if ( (_QWORD)v20 )
        {
          *((_QWORD *)&v20 + 1) = MiCreateNodeLists(a1, v20);
          if ( *((_QWORD *)&v20 + 1) )
          {
LABEL_35:
            MiUpdatePartitionMemory(a1, (__int64)&v19, v10);
            return;
          }
          MiDereferencePageRuns(v20);
          *(_QWORD *)&v20 = 0LL;
        }
      }
    }
    v10 = 0;
    goto LABEL_35;
  }
}
