/*
 * XREFs of sub_1800551C8 @ 0x1800551C8
 * Callers:
 *     sub_180055680 @ 0x180055680 (sub_180055680.c)
 *     sub_18008388C @ 0x18008388C (sub_18008388C.c)
 *     sub_180087850 @ 0x180087850 (sub_180087850.c)
 *     sub_18008CCD0 @ 0x18008CCD0 (sub_18008CCD0.c)
 *     sub_1800DAD11 @ 0x1800DAD11 (sub_1800DAD11.c)
 *     sub_1800DB0E8 @ 0x1800DB0E8 (sub_1800DB0E8.c)
 *     sub_1800DB24E @ 0x1800DB24E (sub_1800DB24E.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_18001E4BC @ 0x18001E4BC (sub_18001E4BC.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_18005439C @ 0x18005439C (sub_18005439C.c)
 *     sub_1800550A0 @ 0x1800550A0 (sub_1800550A0.c)
 */

void **__fastcall sub_1800551C8(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  sub_180012408(a1 + 1704, a2);
  v3 = *(_QWORD *)(a1 + 1688);
  if ( v3 )
    sub_18001050C(v3);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( v4 )
    sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 1656);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 1640);
  if ( v6 )
    sub_18001050C(v6);
  sub_1800550A0((void **)(a1 + 1616));
  sub_180026484((void **)(a1 + 448));
  sub_18001E4BC(a1 + 416);
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  sub_180011A5C(a1 + 248);
  sub_180011A5C(a1 + 216);
  sub_180011A5C(a1 + 184);
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
    sub_18001050C(v7);
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
    sub_18001050C(v8);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    sub_18005439C(v9, *(_QWORD *)(a1 + 112));
    sub_180010134(*(void **)(a1 + 104), 16 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 4));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return sub_1800403A4((_QWORD *)a1);
}
