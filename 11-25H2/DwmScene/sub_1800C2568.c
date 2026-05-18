/*
 * XREFs of sub_1800C2568 @ 0x1800C2568
 * Callers:
 *     sub_1800C2D00 @ 0x1800C2D00 (sub_1800C2D00.c)
 *     sub_1800C30E4 @ 0x1800C30E4 (sub_1800C30E4.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 *     sub_1800C5F38 @ 0x1800C5F38 (sub_1800C5F38.c)
 *     sub_1800CA350 @ 0x1800CA350 (sub_1800CA350.c)
 *     sub_1800CA550 @ 0x1800CA550 (sub_1800CA550.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800C2568(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    *a1 = v4;
    a1[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
