/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B6F5E8
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B40A4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
