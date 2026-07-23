/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x1403BD5FC
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1402F0B5C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403BC9C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403BCD30 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExDisownFastResource @ 0x1404926D0 (ExDisownFastResource.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405C1600 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     ExAcquireFastResourceWithFlags @ 0x140654880 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 */

char __fastcall KeAbMarkCrossThreadReleasable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = (__int64 *)&KeGetCurrentThread()->KernelAbEntries->Entries[(unsigned __int8)((unsigned __int64)a2 >> 1)];
  if ( *v2 >= 0 )
    KiAbForceProcessLockEntry(v2);
  result = *(_BYTE *)v2 | 1;
  *(_BYTE *)v2 = result;
  return result;
}
