/*
 * XREFs of sub_18005DF00 @ 0x18005DF00
 * Callers:
 *     sub_18005D404 @ 0x18005D404 (sub_18005D404.c)
 *     sub_180085400 @ 0x180085400 (sub_180085400.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18005DF00(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ColorTransform `RTTI Type Descriptor',
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
