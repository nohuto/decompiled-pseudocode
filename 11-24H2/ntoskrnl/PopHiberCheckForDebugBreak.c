/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140B691F0
 * Callers:
 *     ConsumerGetBuffer @ 0x140B5C2A8 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140B5E8E0 (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140B5EFE0 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140B5F1C4 (ProducerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B690BC (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14029DE08 (KdCheckForDebugBreak.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall PopHiberCheckForDebugBreak(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak(a1, a2, a3);
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
