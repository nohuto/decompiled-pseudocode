/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1403AA4D0
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 * Callees:
 *     PopFxArmResidentTimer @ 0x1403A4B70 (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x1403ABC60 (ExQueueWorkItemEx.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL) )
    PopFxArmResidentTimer(1);
}
