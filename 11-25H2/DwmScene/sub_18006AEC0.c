/*
 * XREFs of sub_18006AEC0 @ 0x18006AEC0
 * Callers:
 *     sub_18006A32C @ 0x18006A32C (sub_18006A32C.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18006AEC0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ImageProcessingCamera `RTTI Type Descriptor',
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
