/*
 * XREFs of sub_180012270 @ 0x180012270
 * Callers:
 *     sub_1800120B4 @ 0x1800120B4 (sub_1800120B4.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18001CF74 @ 0x18001CF74 (sub_18001CF74.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_180012270(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return 2 * a1;
}
