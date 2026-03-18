/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x140662E08
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x140661270 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x14067E4B4 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14067EE34 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14067F988 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14067F9FC (MiReturnPartitionPagesToParent.c)
 *     MiReleaseAddMemoryLocks @ 0x1407D9E9C (MiReleaseAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407EC990 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140C42780 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
