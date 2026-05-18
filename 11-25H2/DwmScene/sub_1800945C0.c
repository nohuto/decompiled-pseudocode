/*
 * XREFs of sub_1800945C0 @ 0x1800945C0
 * Callers:
 *     sub_180094860 @ 0x180094860 (sub_180094860.c)
 * Callees:
 *     sub_180092990 @ 0x180092990 (sub_180092990.c)
 *     sub_180092D00 @ 0x180092D00 (sub_180092D00.c)
 *     sub_180093068 @ 0x180093068 (sub_180093068.c)
 *     sub_1800933F0 @ 0x1800933F0 (sub_1800933F0.c)
 *     sub_1800936FC @ 0x1800936FC (sub_1800936FC.c)
 *     sub_1800939BC @ 0x1800939BC (sub_1800939BC.c)
 *     sub_180093AD8 @ 0x180093AD8 (sub_180093AD8.c)
 *     sub_180093D1C @ 0x180093D1C (sub_180093D1C.c)
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 */

void **__fastcall sub_1800945C0(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  *a1 = &Spectre::Engine::CommandListState::`vftable';
  v1 = a1 + 8;
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  v2 = a1 + 145;
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  v3 = a1 + 579;
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  v4 = a1 + 1157;
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  v5 = a1 + 1213;
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  v6 = a1 + 1222;
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  v7 = a1 + 1231;
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  v8 = a1 + 1809;
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  sub_1800948A0(a1);
  a1[1828] = &Spectre::Engine::ScissorState::`vftable';
  a1[1817] = &Spectre::Engine::ViewportState::`vftable';
  sub_1800939BC(v8);
  sub_1800933F0(v7);
  sub_180092990(v6);
  sub_180093AD8(v5);
  sub_180093D1C(v4);
  sub_180093068(v3);
  sub_180092D00(v2);
  sub_1800936FC(v1);
  return sub_180092B00(a1);
}
