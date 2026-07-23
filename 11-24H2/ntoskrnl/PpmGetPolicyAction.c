/*
 * XREFs of PpmGetPolicyAction @ 0x140A6E858
 * Callers:
 *     PpmInfoApplySettingUpdate @ 0x1409A40C8 (PpmInfoApplySettingUpdate.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmGetPolicyAction(const __m128i *a1, int *a2)
{
  __m128i v3; // xmm1
  __m128 v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // zf

  v3 = (__m128i)_mm_and_ps(
                  (__m128)_mm_loadu_si128(a1),
                  (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionProcessorPolicyMask));
  if ( v3.m128i_i64[0] | _mm_srli_si128(v3, 8).m128i_u64[0] )
  {
    v12 = a1->m128i_i64[0];
    if ( (v12 & 0x100) != 0 )
      *a2 |= 0x200u;
    if ( (v12 & 0x400) != 0 )
      *a2 |= 0x40u;
    if ( (v12 & 0x200) != 0 )
      *a2 |= 0x20u;
    if ( (v12 & 0x800000000LL) != 0 )
      *a2 |= 0x82u;
    if ( (v12 & 0x400000000LL) != 0 )
    {
      v13 = *a2 | 0x100;
      v14 = PpmPerfAutonomousActivityWindowViaPerfControl == 0;
      *a2 = v13;
      if ( !v14 )
        *a2 = v13 | 2;
    }
    if ( (v12 & 0x1000000000LL) != 0 )
      *a2 |= 0x400u;
  }
  if ( _bittest64(a1->m128i_i64, 0x21u) && PpmPerfEppViaPerfControl )
    *a2 |= 2u;
  v4 = (__m128)_mm_loadu_si128(a1);
  v5 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfMask));
  if ( v5.m128i_i64[0] | _mm_srli_si128(v5, 8).m128i_u64[0] )
    *a2 |= 2u;
  v6 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionHeteroSchedulerMask));
  if ( v6.m128i_i64[0] | _mm_srli_si128(v6, 8).m128i_u64[0] )
    *a2 |= 0x1000u;
  v7 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionParkingMask));
  if ( v7.m128i_i64[0] | _mm_srli_si128(v7, 8).m128i_u64[0] )
    *a2 |= 0xCu;
  v8 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfReinitMask));
  if ( v8.m128i_i64[0] | _mm_srli_si128(v8, 8).m128i_u64[0] )
    *a2 |= 8u;
  v9 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionIdleMask));
  if ( v9.m128i_i64[0] | _mm_srli_si128(v9, 8).m128i_u64[0] )
    *a2 |= 1u;
  v10 = (__m128i)_mm_and_ps(v4, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyActionPerfResizeHistoryMask));
  result = v10.m128i_i64[0] | _mm_srli_si128(v10, 8).m128i_u64[0];
  if ( result )
    *a2 |= 0x10u;
  return result;
}
