/*
 * XREFs of sub_180068420 @ 0x180068420
 * Callers:
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 * Callees:
 *     sub_18003FFE4 @ 0x18003FFE4 (sub_18003FFE4.c)
 */

__int64 __fastcall sub_180068420(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003FFE4((__int64)a1, a1[2] + 1LL);
  return sub_180068250(a1, v2);
}
