/*
 * XREFs of ZwCreateEvent @ 0x180162590
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitializeInternal @ 0x180066800 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18009AE50 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F6A40 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F749C (RtlpWnfRegisterTpNotification.c)
 *     LdrpCreateLoaderEvents @ 0x1801072EC (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180111934 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     WerpCreateCompletionEvent @ 0x180112E18 (WerpCreateCompletionEvent.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlpCtContextInit @ 0x1801479E4 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateEvent()
{
  __int64 result; // rax

  result = 72LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
