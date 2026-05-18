/*
 * XREFs of sub_1800970DC @ 0x1800970DC
 * Callers:
 *     sub_180096FC8 @ 0x180096FC8 (sub_180096FC8.c)
 * Callees:
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180096638 @ 0x180096638 (sub_180096638.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800970DC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_180023E8C((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_180096638(a1 + 32);
  sub_180096638(a1 + 216);
  sub_180027FBC(v4);
  sub_180027FBC(a2 + 8);
  sub_18009671C(a1 + 32, (__int64 *)(a2 + 32));
  sub_18009671C(a1 + 216, (__int64 *)(a2 + 216));
  sub_18002815C(a2 + 8);
  sub_18002815C(v4);
  return a1;
}
