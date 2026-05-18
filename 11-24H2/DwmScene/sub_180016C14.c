/*
 * XREFs of sub_180016C14 @ 0x180016C14
 * Callers:
 *     sub_180016744 @ 0x180016744 (sub_180016744.c)
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 *     sub_180096410 @ 0x180096410 (sub_180096410.c)
 *     sub_18009A1A4 @ 0x18009A1A4 (sub_18009A1A4.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_180016C14(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return 8 * a1;
}
