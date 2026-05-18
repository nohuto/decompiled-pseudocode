/*
 * XREFs of sub_1800845F4 @ 0x1800845F4
 * Callers:
 *     sub_180083EA0 @ 0x180083EA0 (sub_180083EA0.c)
 *     sub_180084964 @ 0x180084964 (sub_180084964.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_1800845F4(__int64 a1)
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

  v2 = (__int64 *)sub_180078418(a1);
  v3 = sub_180015D88(v2, &v12);
  v4 = (__int64 *)(a1 + 1816);
  sub_180011010((_QWORD *)(a1 + 1816), v3);
  if ( v12.m128i_i64[1] )
    sub_18001050C(v12.m128i_i64[1]);
  v5 = *v4;
  v6 = sub_18001B4B0(v12.m128i_i64, a1 + 24, (__int64)" DepthSampler");
  sub_180027C24(v5, (__int64)v6);
  v13 = 0;
  v17 = 0;
  v7 = 3;
  v14 = 0;
  v8 = *(_DWORD *)(a1 + 1944) == 1;
  v16 = xmmword_1800F7600;
  v18 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C410);
  if ( v8 )
    v7 = 6;
  v10 = *v4;
  v15 = v7;
  v12 = si128;
  return sub_180050750(v10, &v12, 0LL);
}
