/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1406A75D0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C183C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x14063C7B0 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     SshpAlpcMessageCallback @ 0x140767C20 (SshpAlpcMessageCallback.c)
 *     SshpAlpcProcessMessage @ 0x140768068 (SshpAlpcProcessMessage.c)
 *     SshpAlpcSendMessage @ 0x140768188 (SshpAlpcSendMessage.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A23B90 (PopUmpoProcessMessages.c)
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 *     PopMonitorProcessLoop @ 0x140A7FDF8 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
