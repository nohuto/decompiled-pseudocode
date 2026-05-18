/*
 * XREFs of sub_18005E6C8 @ 0x18005E6C8
 * Callers:
 *     sub_18005E7F4 @ 0x18005E7F4 (sub_18005E7F4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005E6C8(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_18002D710(1uLL);
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v3);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18003FEE0(a1 + 24, 0x10uLL, *(_QWORD *)(a1 + 8));
  return a1;
}
