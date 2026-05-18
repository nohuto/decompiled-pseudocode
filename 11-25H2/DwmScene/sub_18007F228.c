/*
 * XREFs of sub_18007F228 @ 0x18007F228
 * Callers:
 *     sub_180044A6C @ 0x180044A6C (sub_180044A6C.c)
 *     sub_18007FC44 @ 0x18007FC44 (sub_18007FC44.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18007F228(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax

  sub_18002774C(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[15] = v4;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
