/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140B4FC58
 * Callers:
 *     PopZeroHiberFile @ 0x14074724C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
