/*
 * XREFs of sub_18009723C @ 0x18009723C
 * Callers:
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 * Callees:
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18009723C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_180023FEC((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_180096798(a1 + 32);
  sub_180096798(a1 + 216);
  sub_18002811C(v4);
  sub_18002811C(a2 + 8);
  sub_18009687C(a1 + 32, (__int64 *)(a2 + 32));
  sub_18009687C(a1 + 216, (__int64 *)(a2 + 216));
  sub_1800282BC(a2 + 8);
  sub_1800282BC(v4);
  return a1;
}
