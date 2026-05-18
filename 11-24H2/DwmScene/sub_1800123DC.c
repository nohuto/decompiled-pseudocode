/*
 * XREFs of sub_1800123DC @ 0x1800123DC
 * Callers:
 *     sub_180011F00 @ 0x180011F00 (sub_180011F00.c)
 *     sub_180040710 @ 0x180040710 (sub_180040710.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800123DC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Light `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
