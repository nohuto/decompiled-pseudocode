/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1406622A4
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x140661270 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x14067E4B4 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14067EE34 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14067F988 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14067F9FC (MiReturnPartitionPagesToParent.c)
 *     MiAcquireAddMemoryLocks @ 0x1407D86A8 (MiAcquireAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407EC990 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C42780 (MiInitializeMirroring.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 192);
  result = KeAbPreAcquire(a1 + 192, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
