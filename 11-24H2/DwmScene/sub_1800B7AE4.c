/*
 * XREFs of sub_1800B7AE4 @ 0x1800B7AE4
 * Callers:
 *     sub_1800BB770 @ 0x1800BB770 (sub_1800BB770.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

void **__fastcall sub_1800B7AE4(__int64 a1)
{
  void **result; // rax

  sub_1800277F0();
  result = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  return result;
}
