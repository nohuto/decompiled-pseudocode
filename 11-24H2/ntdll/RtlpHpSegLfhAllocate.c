/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x180066F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegAlloc @ 0x180067020 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F1CB0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // eax
  __int64 v9; // rsi
  __int64 result; // rax
  bool v11; // cc

  v6 = 134217732;
  if ( a2 < 0x10000 )
    v6 = 0x8000000;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0, v6);
  *a3 = 0;
  *a4 = 0;
  if ( !v9 )
    return v9;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000 )
  {
    *a3 |= 1u;
    return v9;
  }
  if ( (RtlpHpLfhPerfFlags & 0x10) == 0 || (*(_BYTE *)(a1 + 13) & 7) == 0 )
    return v9;
  v11 = (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v9, a2) <= 1;
  result = v9;
  if ( v11 )
    *a3 |= 1u;
  return result;
}
