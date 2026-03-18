/*
 * XREFs of RtlpHpSegSubAllocate @ 0x1402F84F4
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x1402F8350 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x1402F84D0 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1402F82A0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  __int64 v9; // rax
  __int64 v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9
    && ((unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
     || (RtlpHpLfhPerfFlags & 0x10) != 0
     && (*(_BYTE *)(a1 + 13) & 7) != 0
     && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v9, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v10;
}
