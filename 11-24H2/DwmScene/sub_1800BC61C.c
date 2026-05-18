/*
 * XREFs of sub_1800BC61C @ 0x1800BC61C
 * Callers:
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800C2E60 @ 0x1800C2E60 (sub_1800C2E60.c)
 *     sub_1800CA220 @ 0x1800CA220 (sub_1800CA220.c)
 *     sub_1800CA390 @ 0x1800CA390 (sub_1800CA390.c)
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 * Callees:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800BC61C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
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
