/*
 * XREFs of MiLockHugePfn @ 0x140671F4C
 * Callers:
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x140672884 (MiReleaseMemoryRuns.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 *     MiInsertHugeRangeInPartition @ 0x14068B788 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
