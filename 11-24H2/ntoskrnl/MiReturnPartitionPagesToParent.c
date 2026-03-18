/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14068B28C
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1407FC0FC (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066DDE4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066E948 (MiUnlockDynamicMemoryExclusive.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406717FC (MiReleasePartitionHugeIoSpace.c)
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNode @ 0x140689FF4 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x14068ADD0 (MiMergePageNodes.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FC61C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiReturnPartitionPagesToParent(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r13
  unsigned __int64 *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
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
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v5, (__int64)v4);
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
