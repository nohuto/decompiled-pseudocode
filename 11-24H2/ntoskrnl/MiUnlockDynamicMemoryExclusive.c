/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14066FB1C
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14066DF80 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x14068AE74 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14068C348 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 *     MiReleaseAddMemoryLocks @ 0x1407EA32C (MiReleaseAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax

  v3 = a1 + 192;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 192));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
