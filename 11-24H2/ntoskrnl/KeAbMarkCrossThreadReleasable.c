/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x1403DD90C
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceShared @ 0x1403411F0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1403D707C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403DCCD0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403DD040 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExDisownFastResource @ 0x140497BC0 (ExDisownFastResource.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x1405C4030 (KeAbCrossThreadDeleteDpcRoutine.c)
 *     ExAcquireFastResourceWithFlags @ 0x140656180 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x1404183E4 (KiAbForceProcessLockEntry.c)
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
