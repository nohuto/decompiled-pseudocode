/*
 * XREFs of ZwSetEvent @ 0x1801633E0
 * Callers:
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x18003CC94 (RtlpTpWaitRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180044300 (RtlpWnfMetaCallbackProc.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 *     EtwpSynchronizeWithLogger @ 0x1800B6A90 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     LdrpInitializationComplete @ 0x1800D22F8 (LdrpInitializationComplete.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FD158 (RtlpTpTimerQueueRundown.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801162B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x180149080 (RtlpRtlpCtSelfSubscribeCallback.c)
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
