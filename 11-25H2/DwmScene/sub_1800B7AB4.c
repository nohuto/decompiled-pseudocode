/*
 * XREFs of sub_1800B7AB4 @ 0x1800B7AB4
 * Callers:
 *     sub_1800BBB20 @ 0x1800BBB20 (sub_1800BBB20.c)
 * Callees:
 *     sub_180080D18 @ 0x180080D18 (sub_180080D18.c)
 */

void **__fastcall sub_1800B7AB4(_QWORD *a1)
{
  void **result; // rax

  sub_180080D18((__int64)a1);
  result = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
