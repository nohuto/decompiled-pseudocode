/*
 * XREFs of sub_18001A7E4 @ 0x18001A7E4
 * Callers:
 *     sub_180017008 @ 0x180017008 (sub_180017008.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A7E4(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return sub_18001A81C(a1, a2);
}
