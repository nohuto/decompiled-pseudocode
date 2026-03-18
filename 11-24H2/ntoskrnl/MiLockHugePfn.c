/*
 * XREFs of MiLockHugePfn @ 0x140670D7C
 * Callers:
 *     MiGetHugeRange @ 0x1406700C4 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067024C (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140671594 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x1406716B4 (MiReleaseMemoryRuns.c)
 *     MiUpdateBadPfnIdentity @ 0x140674990 (MiUpdateBadPfnIdentity.c)
 *     MiInsertHugeRangeInPartition @ 0x14068A658 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
