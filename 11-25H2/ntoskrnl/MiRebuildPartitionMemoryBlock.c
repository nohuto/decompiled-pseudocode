/*
 * XREFs of MiRebuildPartitionMemoryBlock @ 0x14067F988
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x1406622A4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140662E08 (MiUnlockDynamicMemoryExclusive.c)
 *     MiMakePartitionMemoryBlock @ 0x1407EC78C (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiRebuildPartitionMemoryBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // edi

  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 18512) )
    goto LABEL_6;
  if ( !*(_QWORD *)(a1 + 80) )
    MiMakePartitionMemoryBlock(a1);
  if ( !*(_QWORD *)(a1 + 18512) || *(_QWORD *)(a1 + 80) )
LABEL_6:
    v3 = 1;
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return v3;
}
