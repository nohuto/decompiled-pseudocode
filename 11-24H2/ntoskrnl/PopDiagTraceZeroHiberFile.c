/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140B5FD84
 * Callers:
 *     PopZeroHiberFile @ 0x14075333C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
