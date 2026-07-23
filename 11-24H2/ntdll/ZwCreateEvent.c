/*
 * XREFs of ZwCreateEvent @ 0x180160950
 * Callers:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18002FCA0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     LdrpInitializeInternal @ 0x1800AE9E0 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F0FA0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F1BEC (RtlpWnfRegisterTpNotification.c)
 *     LdrpCreateLoaderEvents @ 0x18010221C (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x18010CD44 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     WerpCreateCompletionEvent @ 0x18010E0D8 (WerpCreateCompletionEvent.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     RtlpCtContextInit @ 0x180145D94 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
