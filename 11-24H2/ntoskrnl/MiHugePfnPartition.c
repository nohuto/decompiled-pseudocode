/*
 * XREFs of MiHugePfnPartition @ 0x1404D2634
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDereferenceIoHugeRange @ 0x140670D38 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140671FBC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x140672884 (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *((_QWORD *)qword_140E300C8 + ((*a1 >> 4) & 0x7FFLL));
}
