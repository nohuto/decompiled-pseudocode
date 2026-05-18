/*
 * XREFs of sub_1800C26C8 @ 0x1800C26C8
 * Callers:
 *     sub_1800C2E60 @ 0x1800C2E60 (sub_1800C2E60.c)
 *     sub_1800C3244 @ 0x1800C3244 (sub_1800C3244.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C6098 @ 0x1800C6098 (sub_1800C6098.c)
 *     sub_1800CA4B0 @ 0x1800CA4B0 (sub_1800CA4B0.c)
 *     sub_1800CA6B0 @ 0x1800CA6B0 (sub_1800CA6B0.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800C26C8(__int64 *a1, _QWORD *a2)
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
