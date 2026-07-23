/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140B61E50
 * Callers:
 *     PopZeroHiberFile @ 0x14075165C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
