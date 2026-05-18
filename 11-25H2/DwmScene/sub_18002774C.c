/*
 * XREFs of sub_18002774C @ 0x18002774C
 * Callers:
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_180040C9C @ 0x180040C9C (sub_180040C9C.c)
 *     sub_180044D0C @ 0x180044D0C (sub_180044D0C.c)
 *     sub_1800502D0 @ 0x1800502D0 (sub_1800502D0.c)
 *     sub_180050FEC @ 0x180050FEC (sub_180050FEC.c)
 *     sub_180068754 @ 0x180068754 (sub_180068754.c)
 *     sub_18007AD88 @ 0x18007AD88 (sub_18007AD88.c)
 *     sub_18007EC70 @ 0x18007EC70 (sub_18007EC70.c)
 *     sub_18007F228 @ 0x18007F228 (sub_18007F228.c)
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 *     sub_180081DB0 @ 0x180081DB0 (sub_180081DB0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_1800276C4 @ 0x1800276C4 (sub_1800276C4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002774C(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  sub_1800276C4((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v4 = sub_18002752C(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  a1[10] = v5;
  return a1;
}
