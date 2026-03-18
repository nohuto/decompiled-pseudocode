/*
 * XREFs of MiClearPartitionPageBitMap @ 0x14067E4B4
 * Callers:
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1406622A4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140662E08 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x14067E790 (MiDeletePartitionPageNodes.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMakePartitionMemoryBlock @ 0x1407EC78C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *i; // rax
  KIRQL v7; // r14
  _QWORD **v8; // rcx
  __int64 v9; // r10
  _QWORD *v10; // rdx
  _QWORD *j; // rcx
  unsigned __int16 *v13[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v14[6]; // [rsp+40h] [rbp-38h] BYREF

  memset_0(v13, 0, 0x48uLL);
  v14[0] = 0LL;
  v13[0] = (unsigned __int16 *)a1;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  for ( i = *a2; i; i = (_QWORD *)*i )
    v4 = i;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  while ( v4 )
  {
    v8 = (_QWORD **)v4[1];
    v9 = (__int64)v4;
    v10 = v4;
    if ( v8 )
    {
      v4 = (_QWORD *)v4[1];
      for ( j = *v8; j; j = (_QWORD *)*j )
        v4 = j;
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v10 )
          break;
        v10 = v4;
      }
    }
    MiActOnPartitionNodePages(v9, 9u, 0, v13);
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v7);
  if ( (ULONG *)a1 != &MiSystemPartition )
    MiMakePartitionMemoryBlock(a1);
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return MiDeletePartitionPageNodes(v14);
}
