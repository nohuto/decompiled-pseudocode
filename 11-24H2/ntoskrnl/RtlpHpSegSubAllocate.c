/*
 * XREFs of RtlpHpSegSubAllocate @ 0x140368214
 * Callers:
 *     RtlpHpSegVsAllocate @ 0x1403681F0 (RtlpHpSegVsAllocate.c)
 *     RtlpHpSegLfhAllocate @ 0x140368500 (RtlpHpSegLfhAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14035CD40 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v6; // eax
  __int64 v9; // rax
  __int64 v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0LL, v6);
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
