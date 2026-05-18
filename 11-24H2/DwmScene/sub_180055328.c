/*
 * XREFs of sub_180055328 @ 0x180055328
 * Callers:
 *     sub_1800557E0 @ 0x1800557E0 (sub_1800557E0.c)
 *     sub_1800839EC @ 0x1800839EC (sub_1800839EC.c)
 *     sub_1800879B0 @ 0x1800879B0 (sub_1800879B0.c)
 *     sub_18008CE30 @ 0x18008CE30 (sub_18008CE30.c)
 *     sub_1800DAE71 @ 0x1800DAE71 (sub_1800DAE71.c)
 *     sub_1800DB248 @ 0x1800DB248 (sub_1800DB248.c)
 *     sub_1800DB3AE @ 0x1800DB3AE (sub_1800DB3AE.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_18001E61C @ 0x18001E61C (sub_18001E61C.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 *     sub_180055200 @ 0x180055200 (sub_180055200.c)
 */

void **__fastcall sub_180055328(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  sub_180012508(a1 + 1704, a2);
  v3 = *(_QWORD *)(a1 + 1688);
  if ( v3 )
    sub_18001060C(v3);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( v4 )
    sub_18001060C(v4);
  v5 = *(_QWORD *)(a1 + 1656);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 1640);
  if ( v6 )
    sub_18001060C(v6);
  sub_180055200((void **)(a1 + 1616));
  sub_1800265E4((void **)(a1 + 448));
  sub_18001E61C(a1 + 416);
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  sub_180011B5C(a1 + 248);
  sub_180011B5C(a1 + 216);
  sub_180011B5C(a1 + 184);
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
    sub_18001060C(v7);
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
    sub_18001060C(v8);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    sub_1800544FC(v9, *(_QWORD *)(a1 + 112));
    sub_180010234(*(void **)(a1 + 104), 16 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 4));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return sub_180040504((_QWORD *)a1);
}
