/*
 * XREFs of sub_180023E2C @ 0x180023E2C
 * Callers:
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_180049BC4 @ 0x180049BC4 (sub_180049BC4.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180023E2C(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  return a1;
}
