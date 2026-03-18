/*
 * XREFs of MiUnlockPartitionMappedWriter @ 0x14040AAF0
 * Callers:
 *     MiDeleteMappedMdls @ 0x14040A9BC (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x14040AA5C (MiAllocateMappedWriterMdls.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MiUnlockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax

  v3 = a1 + 656;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 656), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 656));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
