/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140B4D3A0
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B40A4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
