/*
 * XREFs of PopDiagTracePrepareSleep @ 0x140ABBB78
 * Callers:
 *     PopPrepareSleep @ 0x1404BD9CC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
