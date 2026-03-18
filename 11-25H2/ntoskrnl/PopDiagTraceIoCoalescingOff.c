/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140AA3E84
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404AC1B8 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3, (int)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
