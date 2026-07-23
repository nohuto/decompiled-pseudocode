/*
 * XREFs of RtlpHpLfhHeatMapDecayCounts @ 0x140454F4C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpLfhHeatMapDecayCounts(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, unsigned int a5)
{
  _WORD *v5; // r9
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  __int64 v8; // r10

  v5 = a3 + 126;
  if ( a5 > 0x1E )
  {
    while ( a3 < v5 )
      *a3++ = 0;
  }
  else
  {
    v6 = 3LL;
    v7 = a5;
    v8 = 1LL;
    while ( 1 )
    {
      if ( (v7 & 1) != 0 )
        v8 *= v6;
      v7 >>= 1;
      if ( !v7 )
        break;
      v6 *= v6;
    }
    while ( a3 < v5 )
    {
      *a3 = (v8 * (unsigned __int64)(unsigned __int16)*a3) >> (2 * (unsigned __int8)a5);
      ++a3;
    }
  }
}
