/*
 * XREFs of PopPrintEx @ 0x1403A9514
 * Callers:
 *     PopCoalescingSetTimer @ 0x1403A7FF4 (PopCoalescingSetTimer.c)
 *     PoFxRegisterDevice @ 0x140741640 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x140744ED0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x140748DF8 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14074A730 (PopDiagTraceIoCoalescingOn.c)
 *     PopSetSessionUserStatus @ 0x140964818 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409651E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x140A229B4 (PopSetSessionDisplayStatus.c)
 *     PopCheckThermalPolicy @ 0x140A3C7C8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA3E84 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((unsigned int)&File, 146, a1, a2, va, 1);
}
