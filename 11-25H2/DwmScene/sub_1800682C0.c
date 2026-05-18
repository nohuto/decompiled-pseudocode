/*
 * XREFs of sub_1800682C0 @ 0x1800682C0
 * Callers:
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 * Callees:
 *     sub_18003FE84 @ 0x18003FE84 (sub_18003FE84.c)
 */

__int64 __fastcall sub_1800682C0(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003FE84((__int64)a1, a1[2] + 1LL);
  return sub_1800680F0(a1, v2);
}
