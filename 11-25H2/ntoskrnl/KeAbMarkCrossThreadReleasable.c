/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x140292FF0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x1402934E0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140406C0C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14048A060 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExDisownFastResource @ 0x1404981A0 (ExDisownFastResource.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405BFF50 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     ExAcquireFastResourceWithFlags @ 0x14064A280 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
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
