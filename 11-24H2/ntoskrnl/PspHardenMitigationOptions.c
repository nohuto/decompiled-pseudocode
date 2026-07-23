/*
 * XREFs of PspHardenMitigationOptions @ 0x140A599A0
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PspHardenMitigationOptions(__m128i *a1)
{
  __m128i v1; // xmm1
  __int64 v3; // xmm2_8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // xmm1_8
  unsigned __int8 v7; // cl
  char v8; // al
  __m128i v9; // [rsp+20h] [rbp-20h]

  v1 = *a1;
  v3 = a1[1].m128i_i64[0];
  v4 = a1->m128i_i64[0];
  v5 = a1->m128i_i64[0] - PspHardenedMitigationOptionsMap;
  v9 = v1;
  if ( v4 == (_QWORD)PspHardenedMitigationOptionsMap )
  {
    v6 = _mm_srli_si128(v1, 8).m128i_u64[0];
    v5 = v6 - *((_QWORD *)&PspHardenedMitigationOptionsMap + 1);
    if ( v6 == *((_QWORD *)&PspHardenedMitigationOptionsMap + 1) )
      v5 = v3 - qword_140FC75B8;
  }
  if ( v5 )
  {
    v7 = v9.m128i_i8[0];
    if ( (v9.m128i_i8[0] & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      v9.m128i_i64[0] = v4;
      v7 = v4;
    }
    if ( (BYTE1(v4) & 3) != 3 )
    {
      v4 |= 0x300uLL;
      v9.m128i_i64[0] = v4;
      v7 = v4;
    }
    if ( ((v4 >> 12) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
      v9.m128i_i64[0] = v4;
      v7 = v4;
    }
    if ( ((v7 >> 4) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      v9.m128i_i64[0] = v4;
    }
    if ( (BYTE2(v4) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
      v9.m128i_i64[0] = v4;
    }
    v8 = (v4 >> 20) & 3;
    if ( v8 != 2 && v8 != 1 && (((unsigned __int64)PspSystemMitigationOptions >> 20) & 3) != 2 )
      v9.m128i_i64[0] = v4 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
    *a1 = v9;
    a1[1].m128i_i64[0] = v3;
  }
}
