/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14068C3BC
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1407FC86C (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406729CC (MiReleasePartitionHugeIoSpace.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x14068BF00 (MiMergePageNodes.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r13
  unsigned __int64 *v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  PVOID *v7; // rax
  PVOID *i; // r14
  PVOID **v9; // rax
  PVOID *v10; // r15
  PVOID *v11; // rcx
  PVOID *v12; // rcx
  KIRQL v13; // di
  int v14; // ebx
  __int64 v15; // rbx
  unsigned __int16 *v17[10]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v17, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = **(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 184) + 72LL);
  MiDrainZeroLookasides(BugCheckParameter2, 0LL, 0LL, 0);
  v17[0] = (unsigned __int16 *)v3;
  v17[1] = (unsigned __int16 *)BugCheckParameter2;
  MiLockDynamicMemoryExclusive(BugCheckParameter2, (__int64)CurrentThread);
  v4 = (unsigned __int64 *)(**(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 184) + 72LL) + 192LL);
  v5 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    v6[10] = 1;
  v7 = *(PVOID **)(BugCheckParameter2 + 24);
  i = 0LL;
  while ( v7 )
  {
    i = v7;
    v7 = (PVOID *)*v7;
  }
  while ( i )
  {
    v9 = (PVOID **)i[1];
    v10 = i;
    v11 = i;
    if ( v9 )
    {
      v12 = *v9;
      for ( i = (PVOID *)i[1]; v12; v12 = (PVOID *)*v12 )
        i = v12;
    }
    else
    {
      while ( 1 )
      {
        i = (PVOID *)((unsigned __int64)i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *i == v11 )
          break;
        v11 = i;
      }
    }
    MiActOnPartitionNodePages((__int64)v10, 6u, 0, v17);
    RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter2 + 24), (__int64)v10);
    if ( (ULONG *)v3 != &MiSystemPartition )
    {
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 200));
      v14 = MiMergePageNodes(v3, (__int64)v10, 0LL);
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 200), v13);
      if ( !v14 )
        continue;
    }
    MiDeletePartitionPageNode(v10);
  }
  MiMakePartitionMemoryBlock(v3);
  MiMakePartitionMemoryBlock(BugCheckParameter2);
  v15 = **(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 184) + 72LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 192));
  KeAbPostRelease(v15 + 192);
  MiUnlockDynamicMemoryExclusive(BugCheckParameter2, (__int64)CurrentThread);
  return MiReleasePartitionHugeIoSpace(BugCheckParameter2);
}
