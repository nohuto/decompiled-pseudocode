/*
 * XREFs of sub_180023C10 @ 0x180023C10
 * Callers:
 *     sub_180023918 @ 0x180023918 (sub_180023918.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

unsigned __int64 __fastcall sub_180023C10(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    sub_180011AFC();
  return a1 << 6;
}
