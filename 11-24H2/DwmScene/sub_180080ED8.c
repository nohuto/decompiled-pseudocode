/*
 * XREFs of sub_180080ED8 @ 0x180080ED8
 * Callers:
 *     sub_18004A1D8 @ 0x18004A1D8 (sub_18004A1D8.c)
 *     sub_18004A204 @ 0x18004A204 (sub_18004A204.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A25C @ 0x18004A25C (sub_18004A25C.c)
 *     sub_18004A364 @ 0x18004A364 (sub_18004A364.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180080ED8(__int64 a1, int a2)
{
  __int64 v4; // rax

  sub_1800278AC((_QWORD *)a1, 2, 8);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 152) = 0;
  sub_180027DD0(a1, 2, 0);
  return a1;
}
