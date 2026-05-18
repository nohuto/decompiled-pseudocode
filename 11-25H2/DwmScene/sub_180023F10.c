/*
 * XREFs of sub_180023F10 @ 0x180023F10
 * Callers:
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180023F10(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_180023E8C(a1 + 1);
  a1[2] = a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[3] = v4;
  return a1;
}
