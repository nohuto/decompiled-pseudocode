/*
 * XREFs of sub_1800CB2E8 @ 0x1800CB2E8
 * Callers:
 *     sub_1800CB390 @ 0x1800CB390 (sub_1800CB390.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_1800CB2E8(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800265E4((void **)(a1 + 504));
  v2 = *(_QWORD *)(a1 + 496);
  if ( v2 )
    sub_18001060C(v2);
  sub_18000E954((__int64 *)(a1 + 480));
  sub_18000E954((__int64 *)(a1 + 472));
  sub_18000E954((__int64 *)(a1 + 464));
  return sub_180029DA8(a1);
}
