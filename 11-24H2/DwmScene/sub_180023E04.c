/*
 * XREFs of sub_180023E04 @ 0x180023E04
 * Callers:
 *     sub_180023824 @ 0x180023824 (sub_180023824.c)
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_180023E04(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
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
