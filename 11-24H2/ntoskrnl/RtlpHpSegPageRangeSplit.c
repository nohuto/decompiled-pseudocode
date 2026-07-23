/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x14041FE90
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x14035D204 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v5; // r10
  __int64 result; // rax
  int v7; // ecx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int16 v10; // dx
  unsigned __int64 v11; // r8
  __int16 v12; // cx

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v8 = a2 + 32LL * a3;
  *(_BYTE *)(v8 + 24) |= 2u;
  v9 = v8;
  *(_BYTE *)(32LL * (unsigned int)(v7 - 1) + v8 + 26) = v7 - 1;
  v10 = 0;
  *(_BYTE *)(v8 + 31) = v7;
  v11 = v8 + 32LL * (unsigned __int8)v7;
  if ( v8 < v11 )
  {
    do
    {
      v12 = *(unsigned __int8 *)(v9 + 25);
      v9 += 32LL;
      v10 += v12;
    }
    while ( v9 < v11 );
  }
  *(_DWORD *)v8 = -857879331;
  *(_WORD *)(v8 + 28) = ~v10;
  result = a2 + 32 * v5;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + a2 + 26) = v5 - 1;
  *(_BYTE *)(a2 + 31) = v5;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v8 + 28) - *(_WORD *)(a2 + 28));
  return result;
}
