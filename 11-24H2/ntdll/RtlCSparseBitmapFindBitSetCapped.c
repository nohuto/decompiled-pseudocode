/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x18009DEEC
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x18009DE90 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x18011BF10 (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunForwardEx @ 0x18011B750 (RtlLengthCurrentClearRunForwardEx.c)
 *     RtlLengthCurrentClearRunBackwardEx @ 0x18013BB00 (RtlLengthCurrentClearRunBackwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  const signed __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _OWORD v20[5]; // [rsp+28h] [rbp-50h] BYREF

  v20[0] = 0LL;
  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else if ( v8 > 0x8000 )
    {
      v7 = 0x8000 - v6;
    }
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
      v9 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
    else
      v9 = 0;
    if ( v9 < 2 )
    {
      if ( v9 != 1 )
      {
        v18 = a2 & 0x3FFFFFFF;
        v7 = a3;
        v19 = v18 + a3;
        if ( a3 < 0 )
        {
          v7 = ~v18;
          if ( v19 >= 0 )
            v7 = a3;
        }
        else if ( v19 > 0x40000000 )
        {
          v7 = 0x40000000 - v18;
        }
      }
    }
    else
    {
      v10 = 1LL;
      if ( v7 > 1 )
        v10 = v7;
      v11 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (((__int64)a2 / 0x8000) << 12));
      *(_QWORD *)&v20[0] = v6 + v10;
      *((_QWORD *)&v20[0] + 1) = v11;
      if ( _bittest64(v11, v6) )
      {
        v12 = 0LL;
      }
      else
      {
        v13 = a2 & 0x7FFF;
        if ( v7 <= 0 )
          v12 = -RtlLengthCurrentClearRunBackwardEx(v20, v13, -v7);
        else
          v12 = RtlLengthCurrentClearRunForwardEx(v20, v13, -1LL);
      }
      v14 = -v12;
      if ( v12 > 0 )
        v14 = v12;
      v15 = -v7;
      if ( v7 > 0 )
        v15 = v7;
      if ( v14 < v15 )
        return v6 + v12 + (((__int64)a2 / 0x8000) << 15);
    }
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
