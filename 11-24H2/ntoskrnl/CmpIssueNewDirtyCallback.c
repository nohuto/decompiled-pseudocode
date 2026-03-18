/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x140A58188
 * Callers:
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140931488 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140445910 (PoIssueCoalescingNotification.c)
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
