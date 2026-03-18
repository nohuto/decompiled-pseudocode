/*
 * XREFs of PopPrintEx @ 0x1402CB174
 * Callers:
 *     PopCoalescingSetTimer @ 0x1402CA544 (PopCoalescingSetTimer.c)
 *     PoFxRegisterDevice @ 0x14074D710 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x140750FA0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x140754EC8 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1407567E4 (PopDiagTraceIoCoalescingOn.c)
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409BC5C8 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409BCF98 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopCheckThermalPolicy @ 0x140A40EF8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA8F0C (PopDiagTraceIoCoalescingOff.c)
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((unsigned int)&File, 146, a1, a2, va, 1);
}
