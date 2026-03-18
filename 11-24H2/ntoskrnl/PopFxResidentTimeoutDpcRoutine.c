/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x14049A3F0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402A7430 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x140483290 (PopFxArmResidentTimer.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx((ULONG_PTR)&PopFxResidentWorkItem, 1u, -1) )
    PopFxArmResidentTimer(1);
}
