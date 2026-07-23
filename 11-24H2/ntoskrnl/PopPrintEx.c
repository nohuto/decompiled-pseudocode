/*
 * XREFs of PopPrintEx @ 0x14047F604
 * Callers:
 *     PopCoalescingSetTimer @ 0x14047F5A0 (PopCoalescingSetTimer.c)
 *     PoFxRegisterDevice @ 0x14074BA40 (PoFxRegisterDevice.c)
 *     PopCoalescingNotify @ 0x14074F2C0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x1407531E8 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140754C64 (PopDiagTraceIoCoalescingOn.c)
 *     PopSessionConnectionChangeV2 @ 0x14075E8A4 (PopSessionConnectionChangeV2.c)
 *     PopSetSessionDisplayStatus @ 0x1409A0EDC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopCheckThermalPolicy @ 0x140A367D8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA3FB8 (PopDiagTraceIoCoalescingOff.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(int a1, int a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((int)&File, 146, a1, a2, va, 1);
}
