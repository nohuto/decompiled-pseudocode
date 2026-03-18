/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C
 * Callers:
 *     RootHub_WaitForResumeCompletion @ 0x140009F28 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14000A540 (RootHub_DetectPortInComplianceMode.c)
 *     Command_Initialize @ 0x14000D7CC (Command_Initialize.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005799C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
