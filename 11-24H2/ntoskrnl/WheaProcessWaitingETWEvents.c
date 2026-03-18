/*
 * XREFs of WheaProcessWaitingETWEvents @ 0x14065E260
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 * Callees:
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 */

void WheaProcessWaitingETWEvents()
{
  if ( KeGetCurrentIrql() )
  {
    if ( WheaFlushETWEventsInitialized )
      WheaFlushETWEventsAddWorkRtn();
  }
  else
  {
    WheapProcessWaitingETWEvents();
  }
}
