/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1404A933C
 * Callers:
 *     HvpDetermineFinalViewReservationEnd @ 0x14097F3D4 (HvpDetermineFinalViewReservationEnd.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14097F77C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1409826CC (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
