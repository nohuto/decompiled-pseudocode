/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x1403E4578
 * Callers:
 *     EtwpAddLastDroppedEvent @ 0x1403E4470 (EtwpAddLastDroppedEvent.c)
 *     EtwpBuffersFlushRequired @ 0x1403E4B90 (EtwpBuffersFlushRequired.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048F0C0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x14064559C (EtwpReenableCompression.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x140799EE8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpFreeTraceBufferPool @ 0x14098EF58 (EtwpFreeTraceBufferPool.c)
 *     EtwpAdjustFreeBuffers @ 0x140990048 (EtwpAdjustFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140992044 (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A38EF0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x140AA5500 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9764 (EtwpRealtimeRestoreState.c)
 * Callees:
 *     EtwpIsSingleStreamLogger @ 0x1403E4814 (EtwpIsSingleStreamLogger.c)
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (HvlpFlags & 2) != 0 )
    return (unsigned int)HvlpLogicalProcessorCount;
  v1 = (unsigned __int8)EtwpIsSingleStreamLogger() == 0;
  result = 1LL;
  if ( v1 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
