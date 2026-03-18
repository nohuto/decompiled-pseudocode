/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140ABFFA8
 * Callers:
 *     PopPrepareSleep @ 0x1404BC8CC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
