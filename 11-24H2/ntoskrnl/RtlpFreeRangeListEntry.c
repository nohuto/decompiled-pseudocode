/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140A4A338
 * Callers:
 *     RtlDeleteRange @ 0x14077D1C0 (RtlDeleteRange.c)
 *     RtlpAddIntersectingRanges @ 0x14077D3EC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x14077D738 (RtlpDeleteFromMergedRange.c)
 *     RtlpDeleteRangeListEntry @ 0x140A4A2D8 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x140A65170 (RtlDeleteOwnersRanges.c)
 *     RtlAddRange @ 0x140A70BB0 (RtlAddRange.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
