/*
 * XREFs of sub_1800276C4 @ 0x1800276C4
 * Callers:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800276C4(__int64 a1, int a2, int a3)
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
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C3510 + 20 * a3, 0LL);
  _InterlockedIncrement(&dword_1801C347C[a2]);
  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C34D0 + 20 * *(int *)(a1 + 48));
  return a1;
}
