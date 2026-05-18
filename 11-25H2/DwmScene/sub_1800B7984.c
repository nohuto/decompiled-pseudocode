/*
 * XREFs of sub_1800B7984 @ 0x1800B7984
 * Callers:
 *     sub_1800BB610 @ 0x1800BB610 (sub_1800BB610.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

void **__fastcall sub_1800B7984(__int64 a1)
{
  void **result; // rax

  sub_180027690();
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
