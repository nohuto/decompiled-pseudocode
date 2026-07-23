/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140AA3FB8
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404A8140 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3, (int)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
