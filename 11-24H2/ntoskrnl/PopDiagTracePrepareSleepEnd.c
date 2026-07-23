/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1406F9984
 * Callers:
 *     PopPrepareSleep @ 0x1404B7A3C (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
