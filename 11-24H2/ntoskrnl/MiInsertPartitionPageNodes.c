/*
 * XREFs of MiInsertPartitionPageNodes @ 0x14068B7F4
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionNodePages @ 0x14068B574 (MiFreePartitionNodePages.c)
 *     MiMergePageNodes @ 0x14068BF00 (MiMergePageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPageNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  int v8; // r8d
  char v9; // si
  int v10; // ecx
  bool v11; // di
  struct _KTHREAD *CurrentThread; // rdx
  char v13; // r12
  int v14; // ebp
  BOOL v15; // r8d
  int v16; // ebx
  int v17; // eax
  KIRQL v18; // al
  unsigned int v19; // r8d
  KIRQL v20; // bl
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-48h]
  __int64 BugCheckParameter3; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h]
  __int64 BugCheckParameter2a; // [rsp+98h] [rbp+20h]

  BugCheckParameter3 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v7 = RtlNumberOfSetBitsEx((__int64 *)(a3 + 32));
  v8 = *(_DWORD *)(a2 + 24);
  BugCheckParameter4 = v7;
  v9 = 1;
  v10 = v8 & 0x80;
  v11 = (v8 & 0x80) != 0 || (v8 & 0x400) != 0;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v25 = (__int64)CurrentThread;
  v14 = 0;
  v24 = 1;
  if ( (v8 & 0x190) == 0 )
  {
    v15 = (v8 & 1) == 0;
    v16 = 0;
    if ( !v10 )
      v16 = v15;
    v24 = v16;
    MiIncreaseCommitLimits(a1, v7, v7, v7, v16, 0LL);
    CurrentThread = (struct _KTHREAD *)v25;
  }
  v17 = *(_DWORD *)(a2 + 24);
  if ( (v17 & 0x20) != 0 )
  {
    a4 = 0LL;
    v13 = 1;
  }
  else if ( (v17 & 0x10) == 0 )
  {
    MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    *(_QWORD *)(a1 + 18512) += BugCheckParameter4;
    *(_BYTE *)(a1 + 12) = 1;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v18);
  }
  if ( !v11 )
  {
    v19 = *(_DWORD *)(a2 + 24) | 0x800;
    if ( v24 )
      v19 = *(_DWORD *)(a2 + 24);
    v14 = MiFreePartitionNodePages((unsigned __int16 *)a1, a3, v19);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x10) == 0 )
  {
    v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v9 = MiMergePageNodes(a1, a3, a4);
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v20);
    MiMakePartitionMemoryBlock(a1);
    MiUnlockDynamicMemoryExclusive(a1, v25);
  }
  if ( v14 < 0 && !v13 )
  {
    BugCheckParameter2a = (__int64)v14 << 32;
    LODWORD(BugCheckParameter2a) = *(_DWORD *)(a2 + 24);
    KeBugCheckEx(0x1Au, 0x41007uLL, BugCheckParameter2a, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v9 )
    MiDeletePartitionPageNode((PVOID *)a3);
  return (unsigned int)v14;
}
