/*
 * XREFs of sub_18001D934 @ 0x18001D934
 * Callers:
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 *     sub_1800C6484 @ 0x1800C6484 (sub_1800C6484.c)
 *     sub_1800D1480 @ 0x1800D1480 (sub_1800D1480.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_18001D934(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return 32 * a1;
}
