/*
 * XREFs of PopCoalescingSetTimer @ 0x1402CA544
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404ADA60 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x140750FA0 (PopCoalescingNotify.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3LL, "PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (unsigned int)&PopCoalescingTimer,
               -10000000 * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
