/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x140A546A0
 * Callers:
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1404481D4 (PoIssueCoalescingNotification.c)
 */

__int64 CmpIssueNewDirtyCallback()
{
  __int64 result; // rax

  result = (unsigned int)CmpHoldLazyFlush;
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      return PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
  return result;
}
