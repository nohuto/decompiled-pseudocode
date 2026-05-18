/*
 * XREFs of sub_18008B630 @ 0x18008B630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008B630(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+5Ch] [rbp-24h]
  int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 3648) + 512LL);
  v5 = sub_180016F54((__int64)&si128, (__int64)&unk_1801C7F08);
  v6 = sub_18004CCE0(v4, &v18, v5);
  v7 = (__int64 *)(a1 + 216);
  sub_180011010((_QWORD *)(a1 + 216), v6);
  if ( v19 )
    sub_18001050C(v19);
  v8 = (__int64 *)sub_18005BBB4(*v7, &v18);
  sub_180011010((_QWORD *)(a1 + 200), v8);
  if ( v19 )
    sub_18001050C(v19);
  v9 = sub_18005B17C(*v7, &v18);
  sub_180011010((_QWORD *)(a1 + 248), v9);
  if ( v19 )
    sub_18001050C(v19);
  v10 = sub_180015D88(*(__int64 **)(a2 + 3648), &v18);
  v11 = (__int64 *)(a1 + 264);
  sub_180011010((_QWORD *)(a1 + 264), v10);
  if ( v19 )
    sub_18001050C(v19);
  v12 = *v11;
  v13 = std::string::string(&si128, "Image Processing Bloom Sampler");
  sub_180027C24(v12, (__int64)v13);
  v14 = *v11;
  v21 = 0;
  v25 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C400);
  v22 = 1;
  v24 = 0LL;
  v23 = 7;
  v26 = 2139095039;
  sub_180050750(v14, &si128, 0LL);
  v15 = *(int *)(a1 + 144);
  v16 = sub_180088F00(a1, &v18);
  sub_180011010((_QWORD *)(a1 + 184), v16);
  if ( v19 )
    sub_18001050C(v19);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180105E30[v15],
           dword_180105F60[v15]);
}
