/*
 * XREFs of RtlpHpVaMgrRangeCommitProcess @ 0x18009E1B0
 * Callers:
 *     RtlpHpVaMgrRangeCommit @ 0x18011B378 (RtlpHpVaMgrRangeCommit.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x180156434 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x18009DE90 (RtlSparseArrayElementAllocated.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCommitProcess(__int64 a1, __m128i *a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // r11d
  volatile signed __int16 *v8; // r8
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int16 v15; // dx
  __int16 v16; // r10
  unsigned __int64 v17; // xmm0_8
  signed __int16 v19; // ax
  signed __int16 v20; // tt

  v6 = RtlSparseArrayElementAllocated(
         *(_QWORD *)(a1 + 24) + 16LL,
         (unsigned __int64)(a2->m128i_i64[0] - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v7 = 0;
  v8 = (volatile signed __int16 *)(v6 + 2);
  while ( a2->m128i_i64[1] )
  {
    v9 = *a2;
    v10 = _mm_srli_si128(*a2, 8).m128i_u64[0];
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
        + (((unsigned __int64)v8 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(a1 + 24)
                                                                                              + 24LL) << 20);
    v12 = v10 + a2->m128i_i64[0];
    v13 = v11 + 0x100000;
    if ( v12 <= v11 || v13 <= v9.m128i_i64[0] )
    {
      BYTE2(v11) = 0;
      v14 = 0LL;
    }
    else
    {
      if ( v9.m128i_i64[0] > v11 )
        v11 = a2->m128i_i64[0];
      if ( v12 < v13 )
        v13 = v10 + a2->m128i_i64[0];
      v14 = v13 - v11;
    }
    v15 = ((1 << SBYTE2(v14)) - 1) << (BYTE2(v11) & 0xF);
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        _InterlockedOr16(v8, v15);
      }
      else
      {
        v16 = ~v15;
        if ( a3 == 2 )
        {
          _m_prefetchw((const void *)v8);
          v19 = *v8;
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange16(v8, v16 & v19, v19);
          }
          while ( v20 != v19 );
          if ( (v15 & (unsigned __int16)v19) != 0 )
            v7 = 2;
        }
        else
        {
          *v8 &= v16;
        }
      }
    }
    else if ( (*v8 & v15) != v15 )
    {
      return 1;
    }
    v17 = _mm_srli_si128(*a2, 8).m128i_u64[0];
    a2->m128i_i64[0] += v14;
    a2->m128i_i64[1] = v17 - v14;
    v8 += 16;
  }
  return v7;
}
