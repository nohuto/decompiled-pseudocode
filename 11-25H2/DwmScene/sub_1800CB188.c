/*
 * XREFs of sub_1800CB188 @ 0x1800CB188
 * Callers:
 *     sub_1800CB230 @ 0x1800CB230 (sub_1800CB230.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_1800CB188(__int64 a1)
{
  __int64 v2; // rcx

  sub_180026484((void **)(a1 + 504));
  v2 = *(_QWORD *)(a1 + 496);
  if ( v2 )
    sub_18001050C(v2);
  sub_18000E854((__int64 *)(a1 + 480));
  sub_18000E854((__int64 *)(a1 + 472));
  sub_18000E854((__int64 *)(a1 + 464));
  return sub_180029C48(a1);
}
