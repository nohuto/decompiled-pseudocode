/*
 * XREFs of sub_18008BE60 @ 0x18008BE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180078530 @ 0x180078530 (sub_180078530.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

bool __fastcall sub_18008BE60(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool result; // al

  result = 0;
  if ( sub_180078530(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Aimer `RTTI Type Descriptor',
           1);
    if ( *(_QWORD *)(v4 + 96) == *(_QWORD *)(a1 + 96)
      && *(_DWORD *)(v4 + 88) == *(_DWORD *)(a1 + 88)
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v4 + 112), (__m128)*(unsigned int *)(v4 + 120)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 112), (__m128)*(unsigned int *)(a1 + 120)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v4 + 124), (__m128)*(unsigned int *)(v4 + 132)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 124), (__m128)*(unsigned int *)(a1 + 132)))) & 7) == 7
      && (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v4 + 140), (__m128)*(unsigned int *)(v4 + 148)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 140), (__m128)*(unsigned int *)(a1 + 148)))) & 7) == 7
      && *(float *)(v4 + 136) == *(float *)(a1 + 136) )
    {
      return 1;
    }
  }
  return result;
}
