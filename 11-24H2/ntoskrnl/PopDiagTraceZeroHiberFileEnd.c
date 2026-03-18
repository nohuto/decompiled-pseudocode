/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140B5FDA0
 * Callers:
 *     PopZeroHiberFile @ 0x14075333C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
