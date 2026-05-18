/*
 * XREFs of sub_18005E568 @ 0x18005E568
 * Callers:
 *     sub_18005E694 @ 0x18005E694 (sub_18005E694.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005E568(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_18002D5B0(1uLL);
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
  sub_18003FD80(a1 + 24, 0x10uLL, *(_QWORD *)(a1 + 8));
  return a1;
}
