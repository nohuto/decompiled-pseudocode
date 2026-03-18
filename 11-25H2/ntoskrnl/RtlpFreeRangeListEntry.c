/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140A4ECB8
 * Callers:
 *     RtlDeleteRange @ 0x14076DFA0 (RtlDeleteRange.c)
 *     RtlpAddIntersectingRanges @ 0x14076E1CC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x14076E518 (RtlpDeleteFromMergedRange.c)
 *     RtlpDeleteRangeListEntry @ 0x140A4EC58 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x140A69430 (RtlDeleteOwnersRanges.c)
 *     RtlAddRange @ 0x140A749C0 (RtlAddRange.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
