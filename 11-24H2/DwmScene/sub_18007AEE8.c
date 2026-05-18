/*
 * XREFs of sub_18007AEE8 @ 0x18007AEE8
 * Callers:
 *     sub_18007B0E0 @ 0x18007B0E0 (sub_18007B0E0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007AEE8(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800278AC(a1, 6, 7);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  a1[14] = result;
  return result;
}
