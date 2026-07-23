/*
 * XREFs of PopCoalescingSetTimer @ 0x14047F5A0
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404A8140 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x14074F2C0 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3LL, "PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
