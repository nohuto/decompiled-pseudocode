/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140B61E6C
 * Callers:
 *     PopZeroHiberFile @ 0x14075165C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
