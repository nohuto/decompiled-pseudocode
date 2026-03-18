/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140B4FC74
 * Callers:
 *     PopZeroHiberFile @ 0x14074724C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
