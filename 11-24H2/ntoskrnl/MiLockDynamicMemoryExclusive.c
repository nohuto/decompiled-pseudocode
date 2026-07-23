/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x14066EFB8
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14066DF80 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x14068AE74 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068C348 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 *     MiAcquireAddMemoryLocks @ 0x1407E8B38 (MiAcquireAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 192);
  result = (char *)KeAbPreAcquire(a1 + 192, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
