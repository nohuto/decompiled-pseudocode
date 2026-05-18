/*
 * XREFs of sub_180023CA4 @ 0x180023CA4
 * Callers:
 *     sub_1800236C4 @ 0x1800236C4 (sub_1800236C4.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_180023CA4(_QWORD *a1, _QWORD *a2)
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
    sub_180014FA0(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
