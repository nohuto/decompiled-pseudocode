/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1403AA490
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x1403A4ADC (PopPepArmIdleTimer.c)
 *     ExQueueWorkItemEx @ 0x1403ABC60 (ExQueueWorkItemEx.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1LL, 0xFFFFFFFFLL) )
    PopPepArmIdleTimer(1);
}
