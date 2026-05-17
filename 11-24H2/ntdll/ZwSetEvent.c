/*
 * XREFs of ZwSetEvent @ 0x180161E50
 * Callers:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     RtlpWnfMetaCallbackProc @ 0x180020C70 (RtlpWnfMetaCallbackProc.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     EtwpSwitchBuffer @ 0x18003D730 (EtwpSwitchBuffer.c)
 *     LdrpInitializationComplete @ 0x180066678 (LdrpInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x180068E28 (RtlpTpTimerQueueRundown.c)
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x18006E794 (RtlpTpWaitRundown.c)
 *     EtwpSynchronizeWithLogger @ 0x18008DBE4 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x180113320 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180147AD0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetEvent()
{
  __int64 result; // rax

  result = 14LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
