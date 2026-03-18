/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140A52408
 * Callers:
 *     RtlDeleteRange @ 0x14077D290 (RtlDeleteRange.c)
 *     RtlpAddIntersectingRanges @ 0x14077D4BC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x14077D808 (RtlpDeleteFromMergedRange.c)
 *     RtlpDeleteRangeListEntry @ 0x140A523A8 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x140A6BC10 (RtlDeleteOwnersRanges.c)
 *     RtlAddRange @ 0x140A76A90 (RtlAddRange.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
