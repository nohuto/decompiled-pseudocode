/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140056D8C
 * Callers:
 *     RootHub_DetectPortInComplianceMode @ 0x14000ADC8 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_WaitForResumeCompletion @ 0x14000D59C (RootHub_WaitForResumeCompletion.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Command_Initialize @ 0x140019F40 (Command_Initialize.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002EFF0 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140056DBC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
