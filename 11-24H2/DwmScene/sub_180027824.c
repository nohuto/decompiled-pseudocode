/*
 * XREFs of sub_180027824 @ 0x180027824
 * Callers:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027824(__int64 a1, int a2, int a3)
{
  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C4520 + 20 * a3, 0LL);
  _InterlockedIncrement(&dword_1801C448C[a2]);
  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C44E0 + 20 * *(int *)(a1 + 48));
  return a1;
}
