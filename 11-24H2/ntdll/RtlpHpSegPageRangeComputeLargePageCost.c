/*
 * XREFs of RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F1CB0
 * Callers:
 *     RtlpHpSegSubAllocate @ 0x180066E50 (RtlpHpSegSubAllocate.c)
 *     RtlpHpSegLfhAllocate @ 0x180066F50 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegAlloc @ 0x180067020 (RtlpHpSegAlloc.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180069560 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeComputeLargePageCost(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned int v5; // edx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int16 *v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // eax
  int v12; // r9d

  v3 = a2 & *a1;
  v4 = a3;
  v5 = a2 - v3;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = v6 + 2 * ((unsigned __int64)(v5 + a3 - 1) >> 21);
  v8 = (__int16 *)(v6 + 2 * ((unsigned __int64)v5 >> 21));
  v9 = ((__int64)(2 * ((unsigned __int64)(v5 + a3 - 1) >> 21) - 2 * ((unsigned __int64)v5 >> 21)) >> 1) + 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( (unsigned __int64)v8 <= v7 )
  {
    if ( (*v8 & 0x7FF) != 0 )
    {
      if ( *v8 < 0 )
        ++v11;
    }
    else
    {
      ++v12;
    }
    ++v8;
  }
  if ( v11 == v9 )
  {
    LOBYTE(v10) = v9 > (unsigned __int64)(v4 + 0x1FFFFF) >> 21;
  }
  else if ( v11 )
  {
    return 2;
  }
  else
  {
    return 4 - (unsigned int)(v12 != 0);
  }
  return v10;
}
