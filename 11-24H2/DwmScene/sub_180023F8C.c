/*
 * XREFs of sub_180023F8C @ 0x180023F8C
 * Callers:
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_180049D24 @ 0x180049D24 (sub_180049D24.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180023F8C(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  return a1;
}
