/*
 * XREFs of sub_18001A8A4 @ 0x18001A8A4
 * Callers:
 *     sub_180017108 @ 0x180017108 (sub_180017108.c)
 *     sub_18004B434 @ 0x18004B434 (sub_18004B434.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A8A4(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return sub_18001A8DC(a1, a2);
}
