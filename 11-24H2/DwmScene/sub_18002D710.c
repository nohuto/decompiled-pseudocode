/*
 * XREFs of sub_18002D710 @ 0x18002D710
 * Callers:
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 *     sub_18002F334 @ 0x18002F334 (sub_18002F334.c)
 *     sub_1800542A0 @ 0x1800542A0 (sub_1800542A0.c)
 *     sub_180059F80 @ 0x180059F80 (sub_180059F80.c)
 *     sub_18005A0C4 @ 0x18005A0C4 (sub_18005A0C4.c)
 *     sub_18005A27C @ 0x18005A27C (sub_18005A27C.c)
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_18005E6C8 @ 0x18005E6C8 (sub_18005E6C8.c)
 *     sub_1800BC3C8 @ 0x1800BC3C8 (sub_1800BC3C8.c)
 *     sub_1800CD080 @ 0x1800CD080 (sub_1800CD080.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_18002D710(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    sub_180011AFC();
  return 48 * a1;
}
