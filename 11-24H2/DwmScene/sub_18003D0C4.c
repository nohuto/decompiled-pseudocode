/*
 * XREFs of sub_18003D0C4 @ 0x18003D0C4
 * Callers:
 *     sub_18003D5B4 @ 0x18003D5B4 (sub_18003D5B4.c)
 *     sub_18003D5F4 @ 0x18003D5F4 (sub_18003D5F4.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004B434 @ 0x18004B434 (sub_18004B434.c)
 *     sub_1800694FC @ 0x1800694FC (sub_1800694FC.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_18003D0C4(unsigned __int64 a1)
{
  if ( a1 > 0x333333333333333LL )
    sub_180011AFC();
  return 80 * a1;
}
