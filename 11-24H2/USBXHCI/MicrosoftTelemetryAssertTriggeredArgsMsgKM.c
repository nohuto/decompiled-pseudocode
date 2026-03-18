/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x140040F58 (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_LogRestoreTimeout @ 0x140041388 (Controller_LogRestoreTimeout.c)
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140056DBC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(int a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, a1, a2, a3, a4);
}
