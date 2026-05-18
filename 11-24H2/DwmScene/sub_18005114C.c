/*
 * XREFs of sub_18005114C @ 0x18005114C
 * Callers:
 *     sub_180016984 @ 0x180016984 (sub_180016984.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005114C(__int64 a1)
{
  __int64 v2; // rax
  signed __int64 v3; // rax

  sub_1800278AC((_QWORD *)a1, 1, 11);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 112) = v2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v3 = _InterlockedExchangeAdd64(&qword_1801C44D0, 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v3 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}
