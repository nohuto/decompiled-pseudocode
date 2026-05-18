/*
 * XREFs of sub_180050430 @ 0x180050430
 * Callers:
 *     sub_180016978 @ 0x180016978 (sub_180016978.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180050430(_QWORD *a1)
{
  __int64 v2; // rax

  sub_1800278AC(a1, 4, 11);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180050390(a1 + 14);
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[16] = v2;
  return a1;
}
