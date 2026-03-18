/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x140B4B360
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B9204 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
