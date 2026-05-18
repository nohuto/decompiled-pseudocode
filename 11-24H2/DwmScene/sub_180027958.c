/*
 * XREFs of sub_180027958 @ 0x180027958
 * Callers:
 *     sub_1800266BC @ 0x1800266BC (sub_1800266BC.c)
 *     sub_180026748 @ 0x180026748 (sub_180026748.c)
 *     sub_180027A60 @ 0x180027A60 (sub_180027A60.c)
 *     sub_1800D655F @ 0x1800D655F (sub_1800D655F.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

void **__fastcall sub_180027958(__int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  _InterlockedDecrement64((volatile signed __int64 *)&unk_1801C44E0 + 20 * *(int *)(a1 + 48));
  _InterlockedDecrement(&dword_1801C448C[*(int *)(a1 + 44)]);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C4520 + 20 * *(int *)(a1 + 56), -*(_QWORD *)(a1 + 64));
  sub_180011B5C(a1 + 8);
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
