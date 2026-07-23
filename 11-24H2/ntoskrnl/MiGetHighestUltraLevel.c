/*
 * XREFs of MiGetHighestUltraLevel @ 0x140291C54
 * Callers:
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetHighestUltraLevel(__int64 a1)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int64 i; // r9
  _QWORD *v7; // rbx
  __int64 j; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9

  v2 = (unsigned __int64 *)(a1 + 24);
LABEL_2:
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2[1];
  v5 = *v2 - 1;
  for ( i = v3 & -(__int64)(v3 < *v2); ; i = 0LL )
  {
    if ( v5 - i != -1LL )
    {
      v7 = (_QWORD *)(v4 + 8 * (i >> 6));
      for ( j = ~*v7 | ((1LL << (i & 0x3F)) - 1); j == -1; j = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > v4 + 8 * (v5 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v10, ~j);
      v11 = v10 + ((__int64)((__int64)v7 - v4) >> 3 << 6);
      if ( v11 <= v5 && v11 != -1LL )
        break;
    }
LABEL_7:
    if ( !i )
    {
      MiIssueFlushTbEntire(0LL, 2LL);
      v13 = 0LL;
      v14 = *v2 >> 6;
      if ( v14 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v13) |= *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v13);
          ++v13;
        }
        while ( v13 < v14 );
      }
      memset_0(*(void **)(a1 + 48), 0, 4 * ((*(_QWORD *)(a1 + 40) >> 5) + ((*(_QWORD *)(a1 + 40) & 0x1F) != 0)));
      goto LABEL_2;
    }
    v9 = v3 + 1;
    if ( v3 + 1 > *v2 )
      v9 = *v2;
    v5 = v9 - 1;
  }
  RtlClearBitsEx(v2, v11, 1LL);
  result = *(_QWORD *)(a1 + 8) + (v11 << 30);
  *(_QWORD *)(a1 + 16) = v11 + 1;
  return result;
}
