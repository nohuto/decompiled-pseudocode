/*
 * XREFs of sub_18007AC94 @ 0x18007AC94
 * Callers:
 *     sub_180082A54 @ 0x180082A54 (sub_180082A54.c)
 *     sub_180083430 @ 0x180083430 (sub_180083430.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_18007AC94(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x1555555555555555uLL )
    sub_180011AFC();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(12LL * *a2);
}
