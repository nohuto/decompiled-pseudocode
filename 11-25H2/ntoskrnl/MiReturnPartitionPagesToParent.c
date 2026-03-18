/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14067F9FC
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1407EC26C (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     MiLockDynamicMemoryExclusive @ 0x1406622A4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140662E08 (MiUnlockDynamicMemoryExclusive.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140665D54 (MiReleasePartitionHugeIoSpace.c)
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNode @ 0x14067E764 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x14067F540 (MiMergePageNodes.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1407EC78C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r13
  unsigned __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rbx
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
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
