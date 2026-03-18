/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1403E4930
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpCompressionDpc @ 0x140645160 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x14064559C (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, LARGE_INTEGER *a2)
{
  int v2; // eax
  LARGE_INTEGER LoggerTimeStamp; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, a2, 4LL);
      if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
        EtwpReenableCompression(a1);
      LoggerTimeStamp.LowPart = *(_DWORD *)(a1 + 1432);
      if ( LoggerTimeStamp.LowPart )
      {
        LoggerTimeStamp.LowPart = _InterlockedExchange((volatile __int32 *)(a1 + 1400), 2);
        if ( !LoggerTimeStamp.LowPart )
        {
          if ( ObGetCurrentIrql() > 2u )
            LOBYTE(LoggerTimeStamp.LowPart) = KeInsertQueueDpc((PRKDPC)(a1 + 1456), 0LL, 0LL);
          else
            LOBYTE(LoggerTimeStamp.LowPart) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(LoggerTimeStamp.LowPart) = EtwpEnqueueAvailableBuffer(a1, a2, 0LL);
    }
  }
  else
  {
    a2[5].HighPart = 3;
    LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
    a2[2] = LoggerTimeStamp;
  }
  return LoggerTimeStamp.LowPart;
}
