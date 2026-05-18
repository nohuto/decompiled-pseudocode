/*
 * XREFs of sub_18004F9B0 @ 0x18004F9B0
 * Callers:
 *     sub_18004F290 @ 0x18004F290 (sub_18004F290.c)
 * Callees:
 *     sub_18004E8A0 @ 0x18004E8A0 (sub_18004E8A0.c)
 *     sub_18004E98C @ 0x18004E98C (sub_18004E98C.c)
 *     sub_18004EA78 @ 0x18004EA78 (sub_18004EA78.c)
 *     sub_18004EB64 @ 0x18004EB64 (sub_18004EB64.c)
 *     sub_18004EC50 @ 0x18004EC50 (sub_18004EC50.c)
 *     sub_18004ED3C @ 0x18004ED3C (sub_18004ED3C.c)
 *     sub_18004EE28 @ 0x18004EE28 (sub_18004EE28.c)
 */

int __fastcall sub_18004F9B0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_18004EB64(a1 + 496);
  sub_18004E8A0(v1);
  sub_18004EA78(v1);
  sub_18004EE28(v1);
  sub_18004E98C(v1);
  sub_18004ED3C(v1);
  sub_18004EC50(v1);
  return sub_18004EF14(v1);
}
