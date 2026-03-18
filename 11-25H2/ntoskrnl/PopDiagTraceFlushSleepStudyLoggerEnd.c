/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B5EC94
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140428138 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
