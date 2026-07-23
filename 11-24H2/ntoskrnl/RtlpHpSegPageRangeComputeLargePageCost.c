/*
 * XREFs of RtlpHpSegPageRangeComputeLargePageCost @ 0x14035CD40
 * Callers:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x140368214 (RtlpHpSegSubAllocate.c)
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
  __int16 *v8; // rax
  unsigned int v9; // r9d
  int v10; // ecx
  unsigned int v11; // r8d
  int i; // ebx

  v3 = a2 & *a1;
  v4 = a3;
  v5 = a2 - v3;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = v6 + 2 * ((unsigned __int64)(v5 + a3 - 1) >> 21);
  v8 = (__int16 *)(v6 + 2 * ((unsigned __int64)v5 >> 21));
  v9 = 0;
  v10 = 0;
  v11 = ((__int64)(2 * ((unsigned __int64)(v5 + a3 - 1) >> 21) - 2 * ((unsigned __int64)v5 >> 21)) >> 1) + 1;
  for ( i = 0; (unsigned __int64)v8 <= v7; ++v8 )
  {
    if ( (*v8 & 0x7FF) != 0 )
    {
      if ( *v8 < 0 )
        ++v10;
    }
    else
    {
      ++i;
    }
  }
  if ( v10 == v11 )
  {
    LOBYTE(v9) = v11 > (unsigned __int64)(v4 + 0x1FFFFF) >> 21;
    return v9;
  }
  else if ( v10 )
  {
    return 2LL;
  }
  else
  {
    LOBYTE(v9) = i == 0;
    return v9 + 3;
  }
}
