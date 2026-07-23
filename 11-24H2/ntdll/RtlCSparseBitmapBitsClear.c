/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x18006B134
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x180026FA4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009BDB8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18009BEDC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x18009E0EC (RtlpHpVaMgrRangeCleanup.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x18002EE00 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  volatile signed __int32 *v12; // r8
  __int64 v13; // r10
  unsigned int v14; // eax
  unsigned __int64 v15; // r9
  __int64 *v16; // r8
  __int64 *v17; // r10
  __int64 v18; // rcx
  __int64 *i; // r8
  __int64 v20; // rdx
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

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
    v9 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
      v10 = (_bittest64(*(const signed __int64 **)a1, v9) != 0) + 1;
    else
      v10 = 0;
    if ( v10 >= 2 )
    {
      v25 = *(_QWORD *)(a1 + 8) + (v9 << 12);
      v11 = v7;
      v12 = (volatile signed __int32 *)(v25 + 4 * (v6 >> 5));
      v13 = a2 & 0x1F;
      if ( (unsigned __int64)(v13 + v7) > 0x20 )
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v12, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v13));
          v11 = v7 - (32 - (unsigned int)(a2 & 0x1F));
          ++v12;
        }
        while ( v11 >= 0x20 )
        {
          *v12++ = 0;
          v11 -= 32LL;
        }
        if ( v11 )
        {
          v14 = -1 << v11;
LABEL_11:
          _InterlockedAnd(v12, v14);
        }
      }
      else
      {
        if ( v7 != 32 )
        {
          v14 = ~(((1 << v7) - 1) << v13);
          goto LABEL_11;
        }
        *v12 = 0;
      }
      if ( v7 >= 512 )
      {
        v21 = 1;
      }
      else
      {
        v15 = a2 & 0x7E00;
        if ( 0x8000 - v15 < 0x200 )
          goto LABEL_21;
        v16 = (__int64 *)(v25 + 8 * (v15 >> 6));
        v17 = (__int64 *)(v25 + 8 * ((v15 + 511) >> 6));
        v18 = *v16;
        if ( v16 == v17 )
        {
          v22 = v18 == 0;
          goto LABEL_24;
        }
        if ( v18 )
        {
LABEL_21:
          v21 = 0;
        }
        else
        {
          for ( i = v16 + 1; ; ++i )
          {
            v20 = *i;
            if ( i == v17 )
              break;
            if ( v20 )
              goto LABEL_21;
          }
          v22 = v20 == 0;
LABEL_24:
          v21 = v22;
        }
      }
      if ( v21 )
        RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v7 == 0x8000);
      goto LABEL_34;
    }
    if ( v10 != 1 )
    {
      v23 = a2 & 0x3FFFFFFF;
      v7 = a3;
      v24 = v23 + a3;
      if ( a3 < 0 )
      {
        v7 = ~v23;
        if ( v24 >= 0 )
          v7 = a3;
      }
      else if ( v24 > 0x40000000 )
      {
        v7 = 0x40000000 - v23;
      }
    }
LABEL_34:
    a2 += v7;
    a3 -= v7;
  }
}
