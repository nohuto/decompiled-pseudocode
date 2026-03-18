/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1404A82FC
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140884B94 (HvpViewMapCreateViewsForRegion.c)
 *     HvpDetermineFinalViewReservationEnd @ 0x140A4D054 (HvpDetermineFinalViewReservationEnd.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
