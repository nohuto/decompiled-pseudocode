/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14066E948
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14066CDB0 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x140689D44 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14068A6C4 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068B218 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14068B28C (MiReturnPartitionPagesToParent.c)
 *     MiReleaseAddMemoryLocks @ 0x1407E9D5C (MiReleaseAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FC820 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C539B0 (MiInitializeMirroring.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a1 + 192;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 192));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5);
  }
  return result;
}
