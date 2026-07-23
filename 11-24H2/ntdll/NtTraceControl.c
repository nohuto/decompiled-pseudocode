/*
 * XREFs of NtTraceControl @ 0x180163B00
 * Callers:
 *     EtwpDemuxUmTraceHandle @ 0x18001D750 (EtwpDemuxUmTraceHandle.c)
 *     EtwEventActivityIdControl @ 0x180048EA0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18004A9F0 (EtwpNotificationThread.c)
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     EtwEventWriteEndScenario @ 0x1800CC990 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CCAD0 (EtwEventWriteStartScenario.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     EtwSendNotification @ 0x1800E9940 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E9BD8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetMaxLogger @ 0x1800EC918 (EtwpGetMaxLogger.c)
 *     EtwReplyNotification @ 0x180109CF0 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015A1F0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015A248 (EtwpUseDescriptorType.c)
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
