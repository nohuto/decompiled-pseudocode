/*
 * XREFs of sub_1800278AC @ 0x1800278AC
 * Callers:
 *     sub_1800264A4 @ 0x1800264A4 (sub_1800264A4.c)
 *     sub_180040DFC @ 0x180040DFC (sub_180040DFC.c)
 *     sub_180044E6C @ 0x180044E6C (sub_180044E6C.c)
 *     sub_180050430 @ 0x180050430 (sub_180050430.c)
 *     sub_18005114C @ 0x18005114C (sub_18005114C.c)
 *     sub_1800688B4 @ 0x1800688B4 (sub_1800688B4.c)
 *     sub_18007AEE8 @ 0x18007AEE8 (sub_18007AEE8.c)
 *     sub_18007EDD0 @ 0x18007EDD0 (sub_18007EDD0.c)
 *     sub_18007F388 @ 0x18007F388 (sub_18007F388.c)
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 *     sub_180081F10 @ 0x180081F10 (sub_180081F10.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 *     sub_180027824 @ 0x180027824 (sub_180027824.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800278AC(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  sub_180027824((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v4 = sub_18002768C(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  a1[10] = v5;
  return a1;
}
