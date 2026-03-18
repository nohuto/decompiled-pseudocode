/*
 * XREFs of MiUnlockHugePfn @ 0x1404CF564
 * Callers:
 *     MiGetHugeBadRangeFromNode @ 0x140664468 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406648D0 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140665AEC (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x140665C0C (MiReleaseMemoryRuns.c)
 *     MiUpdateBadPfnIdentity @ 0x140668F30 (MiUpdateBadPfnIdentity.c)
 *     MiInsertHugeRangeInPartition @ 0x14067EDC8 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockHugePfn(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)a2;
  result = qword_140E2FD88;
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((a1 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((a1 - qword_140E2FD80) >> 3) & 0x1F)));
  if ( (_BYTE)a2 != 17 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    __writecr8(v2);
  }
  return result;
}
