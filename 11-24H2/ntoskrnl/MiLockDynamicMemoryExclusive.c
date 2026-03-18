/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x14066DDE4
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14066CDB0 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x140689D44 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14068A6C4 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068B218 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14068B28C (MiReturnPartitionPagesToParent.c)
 *     MiAcquireAddMemoryLocks @ 0x1407E8568 (MiAcquireAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FC820 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C539B0 (MiInitializeMirroring.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 192);
  result = (__int64)KeAbPreAcquire(a1 + 192, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
