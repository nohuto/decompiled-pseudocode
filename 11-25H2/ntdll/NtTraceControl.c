/*
 * XREFs of NtTraceControl @ 0x180166CD0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpNotificationThread @ 0x1800451D0 (EtwpNotificationThread.c)
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 *     EtwEventActivityIdControl @ 0x180046A50 (EtwEventActivityIdControl.c)
 *     EtwpDemuxUmTraceHandle @ 0x180090EC0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 *     EtwEventWriteEndScenario @ 0x1800CC080 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CC1C0 (EtwEventWriteStartScenario.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     EtwSendNotification @ 0x1800EF950 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EFBE8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetMaxLogger @ 0x1800F3808 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x1800F8358 (EtwpTrackProviderBinary.c)
 *     EtwReplyNotification @ 0x180111A80 (EtwReplyNotification.c)
 *     EtwRegisterSecurityProvider @ 0x18015D3E0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015D438 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 470;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
