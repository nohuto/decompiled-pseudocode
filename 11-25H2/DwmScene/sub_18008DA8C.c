/*
 * XREFs of sub_18008DA8C @ 0x18008DA8C
 * Callers:
 *     sub_18008F900 @ 0x18008F900 (sub_18008F900.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall sub_18008DA8C(__int64 a1, int *a2)
{
  _QWORD *v2; // rax

  dword_1801C8A50 = *a2;
  qword_1801C8A58 = 0LL;
  qword_1801C8A60 = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801C8A58 = (__int64)v2;
  qword_1801C8A68 = 0LL;
  xmmword_1801C8A70 = 0LL;
  qword_1801C8A80 = 7LL;
  qword_1801C8A88 = 8LL;
  dword_1801C8A50 = 1065353216;
  sub_18003FD80((__int64)&qword_1801C8A68, 0x10uLL, (unsigned __int64)v2);
  return &dword_1801C8A50;
}
