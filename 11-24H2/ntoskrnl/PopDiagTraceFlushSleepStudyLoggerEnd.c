/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B6DD48
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B9204 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
