/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1406FBD44
 * Callers:
 *     PopPrepareSleep @ 0x1404BC8CC (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
