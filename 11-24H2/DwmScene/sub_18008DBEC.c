/*
 * XREFs of sub_18008DBEC @ 0x18008DBEC
 * Callers:
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall sub_18008DBEC(__int64 a1, int *a2)
{
  _QWORD *v2; // rax

  dword_1801C9A60 = *a2;
  qword_1801C9A68 = 0LL;
  qword_1801C9A70 = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801C9A68 = (__int64)v2;
  qword_1801C9A78 = 0LL;
  xmmword_1801C9A80 = 0LL;
  qword_1801C9A90 = 7LL;
  qword_1801C9A98 = 8LL;
  dword_1801C9A60 = 1065353216;
  sub_18003FEE0((__int64)&qword_1801C9A78, 0x10uLL, (unsigned __int64)v2);
  return &dword_1801C9A60;
}
