/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1406A8570
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404BCE2C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x14063AD70 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     SshpAlpcMessageCallback @ 0x140767E40 (SshpAlpcMessageCallback.c)
 *     SshpAlpcProcessMessage @ 0x140768288 (SshpAlpcProcessMessage.c)
 *     SshpAlpcSendMessage @ 0x1407683A8 (SshpAlpcSendMessage.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 *     PopMonitorProcessLoop @ 0x140A7A858 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
