/*
 * XREFs of sub_180024070 @ 0x180024070
 * Callers:
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180024070(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_180023FEC(a1 + 1);
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
