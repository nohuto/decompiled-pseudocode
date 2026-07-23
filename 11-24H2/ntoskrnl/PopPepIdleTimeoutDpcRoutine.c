/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140314F70
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402D6B60 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402E6CD8 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
