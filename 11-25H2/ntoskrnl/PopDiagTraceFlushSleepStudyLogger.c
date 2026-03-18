/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140B3B360
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140428138 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
