/*
 * XREFs of ZwSetEvent @ 0x180160210
 * Callers:
 *     EtwpSwitchBuffer @ 0x18001D9B0 (EtwpSwitchBuffer.c)
 *     RtlpWnfMetaCallbackProc @ 0x18004D670 (RtlpWnfMetaCallbackProc.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     RtlpTpTimerRundown @ 0x18008941C (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x18008B074 (RtlpTpWaitRundown.c)
 *     EtwpSynchronizeWithLogger @ 0x1800A96A4 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpInitializationComplete @ 0x1800AE858 (LdrpInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x1800F5E58 (RtlpTpTimerQueueRundown.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010E570 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180145E80 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
