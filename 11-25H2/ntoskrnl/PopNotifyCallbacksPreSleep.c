/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x140AB62D0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
