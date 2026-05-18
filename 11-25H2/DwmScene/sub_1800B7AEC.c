/*
 * XREFs of sub_1800B7AEC @ 0x1800B7AEC
 * Callers:
 *     sub_1800BBBB0 @ 0x1800BBBB0 (sub_1800BBBB0.c)
 * Callees:
 *     sub_180080D18 @ 0x180080D18 (sub_180080D18.c)
 */

void **__fastcall sub_1800B7AEC(_QWORD *a1)
{
  void **result; // rax

  sub_180080D18((__int64)a1);
  result = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
