/*
 * XREFs of sub_18007D3BC @ 0x18007D3BC
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18007D3BC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Shader `RTTI Type Descriptor',
         &Spectre::Engine::HullShader `RTTI Type Descriptor',
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
