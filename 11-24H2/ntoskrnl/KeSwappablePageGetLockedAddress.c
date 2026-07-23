/*
 * XREFs of KeSwappablePageGetLockedAddress @ 0x140470D90
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408EAED0 (PspSchedulerSharedDataRegionSlotAllocate.c)
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
