/*
 * XREFs of MiHugePfnPartition @ 0x1404D91E4
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x14066FA78 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDereferenceIoHugeRange @ 0x14066FB68 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140670DEC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x1406716B4 (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *((_QWORD *)qword_140E2FF88 + ((*a1 >> 4) & 0x7FFLL));
}
