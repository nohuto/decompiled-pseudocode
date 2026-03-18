/*
 * XREFs of KeSwappablePageGetLockedAddress @ 0x14046C218
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408B9D1C (PspSchedulerSharedDataRegionSlotAllocate.c)
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
