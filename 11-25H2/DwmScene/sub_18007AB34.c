/*
 * XREFs of sub_18007AB34 @ 0x18007AB34
 * Callers:
 *     sub_1800828F4 @ 0x1800828F4 (sub_1800828F4.c)
 *     sub_1800832D0 @ 0x1800832D0 (sub_1800832D0.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_18007AB34(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x1555555555555555uLL )
    sub_1800119FC();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(12LL * *a2);
}
