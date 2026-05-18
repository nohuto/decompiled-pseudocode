/*
 * XREFs of sub_180083EA0 @ 0x180083EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_180084550 @ 0x180084550 (sub_180084550.c)
 *     sub_1800845F4 @ 0x1800845F4 (sub_1800845F4.c)
 */

__int64 __fastcall sub_180083EA0(__int64 a1)
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

  sub_180084550(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_1800845F4(a1);
  v2 = (__int64 *)(a1 + 1896);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v3 = (__int64 *)sub_180078418(a1);
    v4 = sub_180015D88(v3, &si128);
    sub_180011010((_QWORD *)(a1 + 1896), v4);
    if ( si128.m128i_i64[1] )
      sub_18001050C(si128.m128i_i64[1]);
    v5 = *v2;
    v6 = sub_18001B4B0(si128.m128i_i64, a1 + 24, (__int64)" ColorSampler");
    sub_180027C24(v5, (__int64)v6);
  }
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v7 = *v2;
  v13 = xmmword_1800F7600;
  v15 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3E0);
  v12 = 7;
  return sub_180050750(v7, &si128, 0LL);
}
