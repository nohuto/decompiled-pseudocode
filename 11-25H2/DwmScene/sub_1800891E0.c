/*
 * XREFs of sub_1800891E0 @ 0x1800891E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800891E0(__int64 a1, __int64 a2)
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

  v4 = sub_180015D88(*(__int64 **)(a2 + 3648), &si128);
  v5 = (__int64 *)(a1 + 216);
  sub_180011010((_QWORD *)(a1 + 216), v4);
  if ( si128.m128i_i64[1] )
    sub_18001050C(si128.m128i_i64[1]);
  v6 = *v5;
  v7 = std::string::string(&si128, "Image Processing Blur Sampler");
  sub_180027C24(v6, (__int64)v7);
  v8 = *v5;
  v13 = 0;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C400);
  v14 = 1;
  v16 = 0LL;
  v15 = 7;
  v18 = 2139095039;
  sub_180050750(v8, &si128, 0LL);
  v9 = *(int *)(a1 + 144);
  v10 = sub_180088F00(a1, si128.m128i_i64);
  sub_180011010((_QWORD *)(a1 + 184), v10);
  if ( si128.m128i_i64[1] )
    sub_18001050C(si128.m128i_i64[1]);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180105E30[v9],
           dword_180105E40[v9]);
}
