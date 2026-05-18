/*
 * XREFs of sub_180091BF4 @ 0x180091BF4
 * Callers:
 *     sub_180091BD0 @ 0x180091BD0 (sub_180091BD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 */

__int64 __fastcall sub_180091BF4(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  int v10; // eax
  void *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h]
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  int v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+4Ch] [rbp-24h]
  int v24; // [rsp+5Ch] [rbp-14h]
  int v25; // [rsp+60h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 3648) + 512LL);
  v5 = sub_180016F54((__int64)&si128, (__int64)&unk_1801C7F08);
  v6 = sub_18004CCE0(v4, &v17, v5);
  v7 = (__int64 *)(a1 + 304);
  sub_180011010((_QWORD *)(a1 + 304), v6);
  if ( v18 )
    sub_18001050C(v18);
  v8 = (__int64 *)sub_18005BBB4(*v7, &v17);
  sub_180011010((_QWORD *)(a1 + 288), v8);
  if ( v18 )
    sub_18001050C(v18);
  v9 = sub_18005B17C(*v7, &v17);
  sub_180011010((_QWORD *)(a1 + 272), v9);
  if ( v18 )
    sub_18001050C(v18);
  sub_180013818(a1 + 336, byte_1800F6C80, 0LL);
  v10 = *(_DWORD *)(a1 + 372);
  switch ( v10 )
  {
    case 8:
      v11 = &unk_1801C81A8;
      break;
    case 16:
      v11 = &unk_1801C81C8;
      break;
    case 32:
      v11 = &unk_1801C81E8;
      break;
    default:
      goto LABEL_14;
  }
  sub_1800132F4(a1 + 336, (__int64)v11);
LABEL_14:
  v12 = sub_180015D88(*(__int64 **)(a2 + 3648), &v17);
  sub_180011010((_QWORD *)(a1 + 320), v12);
  if ( v18 )
    sub_18001050C(v18);
  v13 = *(_QWORD *)(a1 + 320);
  v14 = std::string::string(&si128, "Image Processing Blur Sampler");
  sub_180027C24(v13, (__int64)v14);
  v20 = 0;
  v24 = 0;
  v15 = *(_QWORD *)(a1 + 320);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C400);
  v21 = 1;
  v23 = 0LL;
  v22 = 7;
  v25 = 2139095039;
  return sub_180050750(v15, &si128, 0LL);
}
