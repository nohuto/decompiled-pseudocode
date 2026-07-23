/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140ABB088
 * Callers:
 *     PopPrepareSleep @ 0x1404B7A3C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
