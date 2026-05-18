/*
 * XREFs of sub_18002D5B0 @ 0x18002D5B0
 * Callers:
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 *     sub_18002F1D4 @ 0x18002F1D4 (sub_18002F1D4.c)
 *     sub_180054140 @ 0x180054140 (sub_180054140.c)
 *     sub_180059E20 @ 0x180059E20 (sub_180059E20.c)
 *     sub_180059F64 @ 0x180059F64 (sub_180059F64.c)
 *     sub_18005A11C @ 0x18005A11C (sub_18005A11C.c)
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 *     sub_18005E568 @ 0x18005E568 (sub_18005E568.c)
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 *     sub_1800CCF20 @ 0x1800CCF20 (sub_1800CCF20.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_18002D5B0(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    sub_1800119FC();
  return 48 * a1;
}
