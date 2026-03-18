/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1406EFF5C
 * Callers:
 *     PopPrepareSleep @ 0x1404BD9CC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
