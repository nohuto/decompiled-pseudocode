/*
 * XREFs of sub_1800B7FB4 @ 0x1800B7FB4
 * Callers:
 *     sub_1800BB920 @ 0x1800BB920 (sub_1800BB920.c)
 * Callees:
 *     sub_1800510E0 @ 0x1800510E0 (sub_1800510E0.c)
 */

__int64 __fastcall sub_1800B7FB4(__int64 a1)
{
  __int64 result; // rax

  sub_1800510E0(a1);
  *(_BYTE *)(a1 + 192) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  result = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  return result;
}
