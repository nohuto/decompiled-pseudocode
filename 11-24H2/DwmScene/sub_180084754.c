/*
 * XREFs of sub_180084754 @ 0x180084754
 * Callers:
 *     sub_180084000 @ 0x180084000 (sub_180084000.c)
 *     sub_180084AC4 @ 0x180084AC4 (sub_180084AC4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

__int64 __fastcall sub_180084754(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  bool v8; // zf
  __m128i si128; // xmm1
  __int64 v10; // rcx
  __m128i v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+30h] [rbp-30h]
  int v14; // [rsp+34h] [rbp-2Ch]
  int v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+3Ch] [rbp-24h]
  int v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)sub_180078578(a1);
  v3 = sub_180015E88(v2, &v12);
  v4 = (__int64 *)(a1 + 1816);
  sub_180011110((_QWORD *)(a1 + 1816), v3);
  if ( v12.m128i_i64[1] )
    sub_18001060C(v12.m128i_i64[1]);
  v5 = *v4;
  v6 = sub_18001B610(v12.m128i_i64, a1 + 24, (__int64)" DepthSampler");
  sub_180027D84(v5, (__int64)v6);
  v13 = 0;
  v17 = 0;
  v7 = 3;
  v14 = 0;
  v8 = *(_DWORD *)(a1 + 1944) == 1;
  v16 = xmmword_1800F8600;
  v18 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D400);
  if ( v8 )
    v7 = 6;
  v10 = *v4;
  v15 = v7;
  v12 = si128;
  return sub_1800508B0(v10, &v12, 0LL);
}
