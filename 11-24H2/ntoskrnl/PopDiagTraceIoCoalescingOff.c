/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140AA8F0C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404ADA60 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3, (int)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
