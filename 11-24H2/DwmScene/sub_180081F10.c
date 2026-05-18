/*
 * XREFs of sub_180081F10 @ 0x180081F10
 * Callers:
 *     sub_18007D06C @ 0x18007D06C (sub_18007D06C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180081F10(__int64 a1)
{
  __int64 v2; // rax

  sub_1800278AC((_QWORD *)a1, 12, 0);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v2;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  return a1;
}
