/*
 * XREFs of MiHugePfnPartition @ 0x1404DA234
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404ED414 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140663F58 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDereferenceIoHugeRange @ 0x140664048 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140665344 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x140665C0C (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *((_QWORD *)qword_140E2FD48 + ((*a1 >> 4) & 0x7FFLL));
}
