/*
 * XREFs of sub_180040C9C @ 0x180040C9C
 * Callers:
 *     sub_180059E80 @ 0x180059E80 (sub_180059E80.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180040C9C(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  sub_18002774C((_QWORD *)a1, 0, 10);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  *(_WORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = _InterlockedIncrement64(&qword_1801C34B8);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v2 = sub_18002752C(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v3;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 192) |= 0xFFFFFFFF00000000uLL;
  return a1;
}
