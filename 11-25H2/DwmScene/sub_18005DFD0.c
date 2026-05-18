/*
 * XREFs of sub_18005DFD0 @ 0x18005DFD0
 * Callers:
 *     sub_18005F680 @ 0x18005F680 (sub_18005F680.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_180063A84 @ 0x180063A84 (sub_180063A84.c)
 *     sub_180064FB4 @ 0x180064FB4 (sub_180064FB4.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18005DFD0(__int64 *a1, _QWORD *a2)
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
