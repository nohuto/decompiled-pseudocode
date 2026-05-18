/*
 * XREFs of sub_18007B19C @ 0x18007B19C
 * Callers:
 *     sub_1800786D4 @ 0x1800786D4 (sub_1800786D4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 *     sub_18007B3C8 @ 0x18007B3C8 (sub_18007B3C8.c)
 *     sub_18007B3FC @ 0x18007B3FC (sub_18007B3FC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007B19C(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = *a2 + 16LL;
  unknown_libname_81((_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v4 = sub_18002768C(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v5;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(*a2 + 48LL);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242LL);
  sub_18007B3C8(a1 + 32, *a2 + 80LL);
  sub_18007B3FC(a1 + 56, *a2 + 104LL);
  return a1;
}
