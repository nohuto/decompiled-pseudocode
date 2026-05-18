/*
 * XREFs of sub_180094720 @ 0x180094720
 * Callers:
 *     sub_1800949C0 @ 0x1800949C0 (sub_1800949C0.c)
 * Callees:
 *     sub_180092AF0 @ 0x180092AF0 (sub_180092AF0.c)
 *     sub_180092E60 @ 0x180092E60 (sub_180092E60.c)
 *     sub_1800931C8 @ 0x1800931C8 (sub_1800931C8.c)
 *     sub_180093550 @ 0x180093550 (sub_180093550.c)
 *     sub_18009385C @ 0x18009385C (sub_18009385C.c)
 *     sub_180093B1C @ 0x180093B1C (sub_180093B1C.c)
 *     sub_180093C38 @ 0x180093C38 (sub_180093C38.c)
 *     sub_180093E7C @ 0x180093E7C (sub_180093E7C.c)
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 */

void **__fastcall sub_180094720(_QWORD *a1)
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
  sub_180094A00(a1);
  a1[1828] = &Spectre::Engine::ScissorState::`vftable';
  a1[1817] = &Spectre::Engine::ViewportState::`vftable';
  sub_180093B1C(v8);
  sub_180093550(v7);
  sub_180092AF0(v6);
  sub_180093C38(v5);
  sub_180093E7C(v4);
  sub_1800931C8(v3);
  sub_180092E60(v2);
  sub_18009385C(v1);
  return sub_180092C60(a1);
}
