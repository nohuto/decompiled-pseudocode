/*
 * XREFs of RtlCopyMemoryNonTemporal @ 0x180164380
 * Callers:
 *     RtlWriteNonVolatileMemory @ 0x1801434F0 (RtlWriteNonVolatileMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlCopyMemoryNonTemporal(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  __int8 *v4; // r8
  __m128i *v5; // rax
  __int64 v6; // r9
  signed __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  bool v10; // cf
  unsigned __int64 v11; // r8
  bool v12; // cc

  v3 = a2 - (_QWORD)a1;
  if ( a3 >= 0x4F )
  {
    if ( ((unsigned __int8)a1 & 0xF) != 0 )
    {
      v4 = &a1->m128i_i8[a3];
      _mm_stream_si32(a1->m128i_i32, *(__int64 *)((char *)a1->m128i_i64 + v3));
      if ( ((unsigned __int8)a1 & 8) == 0 )
        _mm_stream_si32(&a1->m128i_i32[2], *(__int64 *)((char *)&a1->m128i_i64[1] + v3));
      a1 = (__m128i *)((unsigned __int64)&a1[1] & 0xFFFFFFFFFFFFFFF0uLL);
      a3 = v4 - (__int8 *)a1;
    }
    do
    {
      v5 = a1;
      v6 = 16LL;
      v10 = a3 < 0x400;
      a3 -= 1024LL;
      if ( v10 )
      {
        v11 = a3 + 1024;
        v6 = v11 >> 6;
        a3 = v11 & 0x3F;
      }
      do
      {
        _mm_prefetch(&v5->m128i_i8[v3], 0);
        v5 += 4;
        --v6;
      }
      while ( v6 );
      v7 = (char *)v5 - (char *)a1;
      do
      {
        v8 = _mm_loadu_si128((__m128i *)((char *)a1 + v3 + 16));
        _mm_stream_si128(a1, _mm_loadu_si128((__m128i *)((char *)a1 + v3)));
        _mm_stream_si128(a1 + 1, v8);
        a1 += 4;
        v9 = _mm_loadu_si128((__m128i *)((char *)a1 + v3 - 16));
        _mm_stream_si128(a1 - 2, _mm_loadu_si128((__m128i *)((char *)a1 + v3 - 32)));
        _mm_stream_si128(a1 - 1, v9);
        v7 -= 64LL;
      }
      while ( v7 );
    }
    while ( a3 >= 0x40 );
  }
  else if ( a3 < 8 )
  {
    for ( ; a3; --a3 )
    {
      a1->m128i_i8[0] = a1->m128i_i8[v3];
      a1 = (__m128i *)((char *)a1 + 1);
    }
    return;
  }
  while ( 1 )
  {
    v12 = a3 <= 8;
    a3 -= 8LL;
    if ( v12 )
      break;
    _mm_stream_si32(a1->m128i_i32, *(__int64 *)((char *)a1->m128i_i64 + v3));
    a1 = (__m128i *)((char *)a1 + 8);
  }
  _mm_stream_si32((int *)((char *)a1->m128i_i32 + a3), *(__int64 *)((char *)a1->m128i_i64 + a3 + v3));
  _mm_sfence();
}
