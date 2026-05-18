/*
 * XREFs of sub_18007EC70 @ 0x18007EC70
 * Callers:
 *     sub_180040928 @ 0x180040928 (sub_180040928.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18007EC70(_QWORD *a1)
{
  __int64 v2; // rax

  sub_18002774C(a1, 9, 4);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
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
