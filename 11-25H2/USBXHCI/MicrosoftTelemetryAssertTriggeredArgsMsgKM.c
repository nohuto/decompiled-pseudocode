/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x140041608 (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041764 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005799C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(int a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, a1, a2, a3, a4);
}
