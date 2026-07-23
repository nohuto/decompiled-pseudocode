/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1404A375C
 * Callers:
 *     HvpDetermineFinalViewReservationEnd @ 0x140967BE4 (HvpDetermineFinalViewReservationEnd.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
