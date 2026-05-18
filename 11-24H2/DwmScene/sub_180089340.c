/*
 * XREFs of sub_180089340 @ 0x180089340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180089060 @ 0x180089060 (sub_180089060.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180089340(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+5Ch] [rbp-14h]
  int v18; // [rsp+60h] [rbp-10h]

  v4 = sub_180015E88(*(__int64 **)(a2 + 3648), &si128);
  v5 = (__int64 *)(a1 + 216);
  sub_180011110((_QWORD *)(a1 + 216), v4);
  if ( si128.m128i_i64[1] )
    sub_18001060C(si128.m128i_i64[1]);
  v6 = *v5;
  v7 = std::string::string(&si128, "Image Processing Blur Sampler");
  sub_180027D84(v6, (__int64)v7);
  v8 = *v5;
  v13 = 0;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D3F0);
  v14 = 1;
  v16 = 0LL;
  v15 = 7;
  v18 = 2139095039;
  sub_1800508B0(v8, &si128, 0LL);
  v9 = *(int *)(a1 + 144);
  v10 = sub_180089060(a1, si128.m128i_i64);
  sub_180011110((_QWORD *)(a1 + 184), v10);
  if ( si128.m128i_i64[1] )
    sub_18001060C(si128.m128i_i64[1]);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180106E30[v9],
           dword_180106E40[v9]);
}
