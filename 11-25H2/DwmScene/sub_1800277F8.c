/*
 * XREFs of sub_1800277F8 @ 0x1800277F8
 * Callers:
 *     sub_18002655C @ 0x18002655C (sub_18002655C.c)
 *     sub_1800265E8 @ 0x1800265E8 (sub_1800265E8.c)
 *     sub_180027900 @ 0x180027900 (sub_180027900.c)
 *     sub_1800D63FF @ 0x1800D63FF (sub_1800D63FF.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

void **__fastcall sub_1800277F8(__int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  _InterlockedDecrement64((volatile signed __int64 *)&unk_1801C34D0 + 20 * *(int *)(a1 + 48));
  _InterlockedDecrement(&dword_1801C347C[*(int *)(a1 + 44)]);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C3510 + 20 * *(int *)(a1 + 56), -*(_QWORD *)(a1 + 64));
  sub_180011A5C(a1 + 8);
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
