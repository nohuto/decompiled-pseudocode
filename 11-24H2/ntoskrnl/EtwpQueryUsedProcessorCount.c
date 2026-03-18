/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14024CFF4
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x14024D3B4 (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x1404A6D34 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x14065159C (EtwpReenableCompression.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A92B8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpAllocateTraceBufferPool @ 0x140830488 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpRealtimeSaveState @ 0x1409D75AC (EtwpRealtimeSaveState.c)
 *     EtwpFreeTraceBufferPool @ 0x1409D7BCC (EtwpFreeTraceBufferPool.c)
 *     EtwpAdjustFreeBuffers @ 0x1409D8EEC (EtwpAdjustFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1409DAEEC (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     EtwpRealtimeRestoreState @ 0x140AAECB8 (EtwpRealtimeRestoreState.c)
 * Callees:
 *     EtwpIsSingleStreamLogger @ 0x14024D038 (EtwpIsSingleStreamLogger.c)
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (HvlpFlags & 2) != 0 )
    return (unsigned int)HvlpLogicalProcessorCount;
  v2 = (unsigned __int8)EtwpIsSingleStreamLogger(a1, a2) == 0;
  result = 1LL;
  if ( v2 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
