/*
 * XREFs of KeSwappablePageGetLockedAddress @ 0x14046A5B4
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSwappablePageGetLockedAddress(_QWORD *a1)
{
  if ( (a1[2] & 1) != 0 )
    return *a1;
  else
    return 0LL;
}
