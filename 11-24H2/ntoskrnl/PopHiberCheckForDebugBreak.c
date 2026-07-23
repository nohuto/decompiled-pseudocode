/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140B6A908
 * Callers:
 *     ConsumerGetBuffer @ 0x140B5E318 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140B60960 (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140B61060 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140B61244 (ProducerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B6A7D4 (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x1402AC8F8 (KdCheckForDebugBreak.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall PopHiberCheckForDebugBreak(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak(a1, a2, a3, a4);
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
