/*
 * XREFs of sub_18005E130 @ 0x18005E130
 * Callers:
 *     sub_18005F7E0 @ 0x18005F7E0 (sub_18005F7E0.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18005E130(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
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
