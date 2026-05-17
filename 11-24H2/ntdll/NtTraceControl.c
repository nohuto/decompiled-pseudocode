/*
 * XREFs of NtTraceControl @ 0x180165740
 * Callers:
 *     EtwEventActivityIdControl @ 0x18001C4A0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x18001DFF0 (EtwpNotificationThread.c)
 *     EtwpDemuxUmTraceHandle @ 0x18003D4D0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     EtwEventWriteEndScenario @ 0x1800CF420 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CF560 (EtwEventWriteStartScenario.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     EtwSendNotification @ 0x1800EE760 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EE9F8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGetMaxLogger @ 0x1800F1C98 (EtwpGetMaxLogger.c)
 *     EtwReplyNotification @ 0x18010ED10 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x18011A13C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015BE30 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015BE88 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 NtTraceControl()
{
  __int64 result; // rax

  result = 470LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
