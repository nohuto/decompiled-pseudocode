/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x14027D604
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x14027D9C4 (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAddLastDroppedEvent @ 0x1404A1604 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x14064FC9C (EtwpReenableCompression.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A93F8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     EtwpAdjustFreeBuffers @ 0x1409D39FC (EtwpAdjustFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409D5658 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1409D652C (EtwpFinalizeHeader.c)
 *     EtwpFreeTraceBufferPool @ 0x140A4927C (EtwpFreeTraceBufferPool.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwpRealtimeSaveState @ 0x140AA5D18 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9B94 (EtwpRealtimeRestoreState.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpIsSingleStreamLogger @ 0x14027D648 (EtwpIsSingleStreamLogger.c)
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
