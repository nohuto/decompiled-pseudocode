/*
 * XREFs of MiLockHugePfn @ 0x1406652D4
 * Callers:
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140665AEC (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x140665C0C (MiReleaseMemoryRuns.c)
 *     MiUpdateBadPfnIdentity @ 0x140668F30 (MiUpdateBadPfnIdentity.c)
 *     MiInsertHugeRangeInPartition @ 0x14067EDC8 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall MiLockHugePfn(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiLockHugePfnInternal(a1);
  return CurrentIrql;
}
