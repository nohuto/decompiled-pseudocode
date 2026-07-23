/*
 * XREFs of MiUnlockPartitionMappedWriter @ 0x140462DD0
 * Callers:
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140462C9C (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x140462D3C (MiAllocateMappedWriterMdls.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
