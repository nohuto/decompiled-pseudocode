/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14049A7E0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402A7430 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1403785FC (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx((ULONG_PTR)&PopPepIdleWorkItem, 1u, -1) )
    PopPepArmIdleTimer(1);
}
