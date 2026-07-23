/*
 * XREFs of MiUnlockHugePfn @ 0x1404C8804
 * Callers:
 *     MiGetHugeBadRangeFromNode @ 0x140671158 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x140672884 (MiReleaseMemoryRuns.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 *     MiInsertHugeRangeInPartition @ 0x14068B788 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockHugePfn(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)a2;
  result = qword_140E30108;
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140E30108 + 4 * ((((a1 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((a1 - qword_140E30100) >> 3) & 0x1F)));
  if ( (_BYTE)a2 != 17 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    __writecr8(v2);
  }
  return result;
}
