/*
 * XREFs of sub_1800BC4BC @ 0x1800BC4BC
 * Callers:
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800C2D00 @ 0x1800C2D00 (sub_1800C2D00.c)
 *     sub_1800CA0C0 @ 0x1800CA0C0 (sub_1800CA0C0.c)
 *     sub_1800CA230 @ 0x1800CA230 (sub_1800CA230.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 * Callees:
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800BC4BC(_QWORD *a1, _QWORD *a2)
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
    sub_180014FA0(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
