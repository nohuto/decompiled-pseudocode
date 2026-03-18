/*
 * XREFs of MiUnlockPartitionMappedWriter @ 0x140469EA0
 * Callers:
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140469D6C (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x140469E0C (MiAllocateMappedWriterMdls.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a1 + 656;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 656), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 656));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5);
  }
  return result;
}
