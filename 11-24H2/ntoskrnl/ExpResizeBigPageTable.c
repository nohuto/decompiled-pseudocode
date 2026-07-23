/*
 * XREFs of ExpResizeBigPageTable @ 0x1403E8ED4
 * Callers:
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExpResizeBigPageTable(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  void *HeapPages; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  unsigned int v12; // r9d
  _QWORD *v13; // rbx
  _QWORD *i; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax

  *a3 = 0LL;
  v4 = PoolBigPageTableSize;
  v5 = PoolBigPageTable;
  if ( PoolBigPageTableSize )
  {
    v7 = 2 * PoolBigPageTableSize;
    if ( 2 * PoolBigPageTableSize <= (unsigned __int64)PoolBigPageTableSize )
      return 0LL;
    if ( v7 > 0x7FFFFFFFFFFFFFFLL )
      return 0LL;
    v6 = (PoolBigPageTableSize << 6) + 4095;
    if ( PoolBigPageTableSize << 6 >= v6 )
      return 0LL;
  }
  else
  {
    v6 = 20479LL;
    v7 = 512LL;
  }
  v8 = v6 & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(a1, v8);
  v10 = (unsigned __int64)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset_0(HeapPages, 0, v8);
  v11 = (_QWORD *)v10;
  do
  {
    *v11 = 1LL;
    v11 += 4;
  }
  while ( v11 != (_QWORD *)(v10 + 32 * v7) );
  v12 = v7 - 1;
  v13 = &v5[4 * v4];
  for ( i = v5; i != v13; i += 4 )
  {
    if ( (*i & 1) == 0 )
    {
      v20 = v12 & ((40543 * (*i >> 12)) ^ ((unsigned __int64)(40543LL * (*i >> 12)) >> 32));
      if ( (*(_BYTE *)(32LL * v20 + v10) & 1) == 0 )
      {
        do
        {
          v22 = v20 + 1;
          v23 = 0LL;
          if ( v22 <= v12 )
            v23 = v22;
          v20 = v23;
        }
        while ( (*(_BYTE *)(32 * v23 + v10) & 1) == 0 );
        v20 = v23;
      }
      v21 = 32LL * v20;
      *(_OWORD *)(v21 + v10) = *(_OWORD *)i;
      *(_OWORD *)(v21 + v10 + 16) = *((_OWORD *)i + 1);
    }
  }
  v15 = 40543 * (v10 >> 12);
  v16 = v12 & (v15 ^ HIDWORD(v15));
  if ( (*(_QWORD *)(32LL * v16 + v10) & 1) == 0 )
  {
    do
    {
      v24 = 0LL;
      if ( v16 + 1 <= v12 )
        v24 = v16 + 1;
      v16 = v24;
    }
    while ( (*(_QWORD *)(32 * v24 + v10) & 1) == 0 );
  }
  v17 = 32LL * v16;
  strcpy((char *)(v17 + v10 + 8), "Pool");
  *(_QWORD *)(v17 + v10) = v10;
  v18 = *(_DWORD *)(v17 + v10 + 12);
  *(_QWORD *)(v17 + v10 + 16) = v8;
  *(_DWORD *)(v17 + v10 + 12) = (unsigned __int8)v18 | 0x4000;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  PoolBigPageTable = (void *)v10;
  PoolBigPageTableSize = v7;
  ExpInsertPoolTracker(0x6C6F6F50u, v8, 64LL, v10);
  if ( v5 )
    *v5 = 0LL;
  *a3 = v5;
  return 1LL;
}
