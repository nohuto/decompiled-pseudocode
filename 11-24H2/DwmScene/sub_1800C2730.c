/*
 * XREFs of sub_1800C2730 @ 0x1800C2730
 * Callers:
 *     sub_1800C3820 @ 0x1800C3820 (sub_1800C3820.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 * Callees:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800C2730(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceTexture `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::TextureD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_1800150A0(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
