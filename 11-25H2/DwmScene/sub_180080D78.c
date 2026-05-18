/*
 * XREFs of sub_180080D78 @ 0x180080D78
 * Callers:
 *     sub_18004A078 @ 0x18004A078 (sub_18004A078.c)
 *     sub_18004A0A4 @ 0x18004A0A4 (sub_18004A0A4.c)
 *     sub_18004A0D0 @ 0x18004A0D0 (sub_18004A0D0.c)
 *     sub_18004A0FC @ 0x18004A0FC (sub_18004A0FC.c)
 *     sub_18004A204 @ 0x18004A204 (sub_18004A204.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180080D78(__int64 a1, int a2)
{
  __int64 v4; // rax

  sub_18002774C((_QWORD *)a1, 2, 8);
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
  sub_180027C70(a1, 2, 0);
  return a1;
}
