/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140B593C0
 * Callers:
 *     ConsumerGetBuffer @ 0x140B4C2A4 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140B4E820 (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140B4EEAC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140B4F090 (ProducerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B5928C (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140275528 (KdCheckForDebugBreak.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
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
