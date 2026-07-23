/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14027D764
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1409D1730 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     EtwpCompressionDpc @ 0x14064F860 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x14064FC9C (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 LoggerTimeStamp; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, a2, 4LL);
      if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
        EtwpReenableCompression(a1);
      LODWORD(LoggerTimeStamp) = *(_DWORD *)(a1 + 1432);
      if ( (_DWORD)LoggerTimeStamp )
      {
        LODWORD(LoggerTimeStamp) = _InterlockedExchange((volatile __int32 *)(a1 + 1400), 2);
        if ( !(_DWORD)LoggerTimeStamp )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql(v7, v6) > 2u )
            LOBYTE(LoggerTimeStamp) = KeInsertQueueDpc((PRKDPC)(a1 + 1456), 0LL, 0LL);
          else
            LOBYTE(LoggerTimeStamp) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(LoggerTimeStamp) = EtwpEnqueueAvailableBuffer(a1, a2, 0LL);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
    *(_QWORD *)(a2 + 16) = LoggerTimeStamp;
  }
  return LoggerTimeStamp;
}
