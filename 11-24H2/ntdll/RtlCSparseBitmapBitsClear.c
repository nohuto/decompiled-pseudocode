/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x180055554
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentFree @ 0x180090324 (RtlpHpSegSegmentFree.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009122C (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x180091350 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x18009355C (RtlpHpVaMgrRangeCleanup.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x180099FB0 (RtlpCSparseBitmapPageDecommit.c)
 */

__int64 __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
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
  bool v21; // zf
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  while ( a3 )
  {
    v7 = a2 & 0x7FFF;
    v8 = a3;
    v9 = v7 + a3;
    if ( a3 < 0 )
    {
      v8 = ~v7;
      if ( v9 >= 0 )
        v8 = a3;
    }
    else if ( v9 > 0x8000 )
    {
      v8 = 0x8000 - v7;
    }
    v10 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
      result = (unsigned int)(_bittest64(*(const signed __int64 **)a1, v10) != 0) + 1;
    else
      result = 0LL;
    if ( (unsigned int)result >= 2 )
    {
      v23 = *(_QWORD *)(a1 + 8) + (v10 << 12);
      v11 = v8;
      v12 = (volatile signed __int32 *)(v23 + 4 * (v7 >> 5));
      v13 = a2 & 0x1F;
      if ( (unsigned __int64)(v13 + v8) > 0x20 )
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v12, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v13));
          v11 = v8 - (32 - (unsigned int)(a2 & 0x1F));
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
LABEL_12:
          _InterlockedAnd(v12, v14);
        }
      }
      else
      {
        if ( v8 != 32 )
        {
          v14 = ~(((1 << v8) - 1) << v13);
          goto LABEL_12;
        }
        *v12 = 0;
      }
      if ( v8 >= 512 )
      {
        result = 1LL;
      }
      else
      {
        v15 = a2 & 0x7E00;
        if ( 0x8000 - v15 < 0x200 )
          goto LABEL_22;
        v16 = (__int64 *)(v23 + 8 * (v15 >> 6));
        v17 = (__int64 *)(v23 + 8 * ((v15 + 511) >> 6));
        v18 = *v16;
        if ( v16 == v17 )
        {
          v21 = v18 == 0;
          goto LABEL_25;
        }
        if ( v18 )
        {
LABEL_22:
          result = 0LL;
        }
        else
        {
          for ( i = v16 + 1; ; ++i )
          {
            v20 = *i;
            if ( i == v17 )
              break;
            if ( v20 )
              goto LABEL_22;
          }
          v21 = v20 == 0;
LABEL_25:
          result = v21;
        }
      }
      if ( (_DWORD)result )
        result = RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v8 == 0x8000);
      goto LABEL_35;
    }
    if ( (_DWORD)result != 1 )
    {
      result = a2 & 0x3FFFFFFF;
      v8 = a3;
      v22 = result + a3;
      if ( a3 < 0 )
      {
        v8 = ~result;
        if ( v22 >= 0 )
          v8 = a3;
      }
      else if ( v22 > 0x40000000 )
      {
        v8 = 0x40000000 - result;
      }
    }
LABEL_35:
    a2 += v8;
    a3 -= v8;
  }
  return result;
}
