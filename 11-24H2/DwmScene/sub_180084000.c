/*
 * XREFs of sub_180084000 @ 0x180084000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_1800846B0 @ 0x1800846B0 (sub_1800846B0.c)
 *     sub_180084754 @ 0x180084754 (sub_180084754.c)
 */

__int64 __fastcall sub_180084000(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __m128i si128; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  int v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+3Ch] [rbp-24h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]

  sub_1800846B0(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_180084754(a1);
  v2 = (__int64 *)(a1 + 1896);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v3 = (__int64 *)sub_180078578(a1);
    v4 = sub_180015E88(v3, &si128);
    sub_180011110((_QWORD *)(a1 + 1896), v4);
    if ( si128.m128i_i64[1] )
      sub_18001060C(si128.m128i_i64[1]);
    v5 = *v2;
    v6 = sub_18001B610(si128.m128i_i64, a1 + 24, (__int64)" ColorSampler");
    sub_180027D84(v5, (__int64)v6);
  }
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v7 = *v2;
  v13 = xmmword_1800F8600;
  v15 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D3D0);
  v12 = 7;
  return sub_1800508B0(v7, &si128, 0LL);
}
