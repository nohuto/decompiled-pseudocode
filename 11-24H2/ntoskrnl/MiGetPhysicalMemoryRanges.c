/*
 * XREFs of MiGetPhysicalMemoryRanges @ 0x140AADC98
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60 (MmGetPhysicalMemoryRangesEx2.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068C348 (MiRebuildPartitionMemoryBlock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetPhysicalMemoryRanges(ULONG *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v3; // rbp
  __int64 v5; // rbx
  int v6; // edi
  unsigned int *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  char *v11; // r15
  char *FileOnlyRanges; // rax
  __int64 Pool; // rax
  __int64 v14; // r12
  _QWORD *v15; // rdi
  __int64 *v16; // rdx
  __int64 v17; // rax
  size_t v18; // rbp
  char v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v19 = 0;
  v5 = (__int64)a1;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 || a1 != &MiSystemPartition )
  {
    v19 = 1;
    while ( 1 )
    {
      MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
      if ( (ULONG *)v5 == &MiSystemPartition || !*(_QWORD *)(v5 + 18512) || *(_QWORD *)(v5 + 80) )
        break;
      MiUnlockDynamicMemoryShared(v5, (__int64)CurrentThread);
      if ( !(unsigned int)MiRebuildPartitionMemoryBlock(v5) )
        return 0LL;
      a1 = (ULONG *)v5;
    }
  }
  v8 = (unsigned int *)MiReferencePageRuns(v5, 0);
  v9 = (__int64)v8;
  if ( v8 )
    v10 = *v8 & (unsigned __int64)-(__int64)(*(_QWORD *)(v5 + 18512) != 0LL);
  else
    v10 = 0LL;
  v20 = 0LL;
  v11 = 0LL;
  if ( v6 )
  {
    FileOnlyRanges = MiGetFileOnlyRanges((__int16 *)v5, a2, &v20);
    v3 = v20;
    v11 = FileOnlyRanges;
  }
  Pool = MiAllocatePool(0x40uLL, 16 * (v10 + v3 + 1), 1750101325);
  v14 = Pool;
  if ( Pool )
  {
    v15 = (_QWORD *)Pool;
    if ( v10 )
    {
      v16 = (__int64 *)(v9 + 24);
      do
      {
        *v15 = *(v16 - 1) << 12;
        v17 = *v16;
        v16 += 2;
        v15[1] = v17 << 12;
        v15 += 2;
        --v10;
      }
      while ( v10 );
    }
    if ( v3 )
    {
      v18 = 16 * v3;
      memmove(v15, v11, v18);
      v15 = (_QWORD *)((char *)v15 + v18);
    }
    *v15 = 0LL;
    v15[1] = 0LL;
  }
  if ( v19 )
    MiUnlockDynamicMemoryShared(v5, (__int64)CurrentThread);
  if ( v9 )
    MiDereferencePageRuns(v9);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v14;
}
