/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x140A3CFDC
 * Callers:
 *     PpmProfileAcDcUpdate @ 0x140A3CAF8 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405CFFFC (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     PpmGetPolicyAction @ 0x140A6E858 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x140A94190 (PpmReapplyIdlePolicy.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmCompareAndApplyPolicySettings(const __m128i *a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __m128i v10; // xmm1
  __int64 v11; // rbx
  unsigned __int64 *v12; // rdx
  char v13; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  unsigned int v17; // esi
  SIZE_T v18; // rdi
  char *v19; // r8
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm6
  int v23; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-4Ch]
  __int64 v25; // [rsp+28h] [rbp-48h]
  __m128i v26; // [rsp+30h] [rbp-40h] BYREF
  __m128i v27; // [rsp+40h] [rbp-30h] BYREF

  v25 = a3;
  v4 = 0;
  v23 = 0;
  v8 = 0;
  if ( PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v4 = 4098;
    v23 = 4098;
  }
  if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() && a4 )
  {
    v4 |= 2u;
    v23 = v4;
  }
  v26 = 0LL;
  v10 = (__m128i)_mm_and_ps(
                   (__m128)_mm_loadu_si128(a1),
                   (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicySettingGlobalMask));
  v27 = v10;
  if ( v10.m128i_i64[0] | _mm_srli_si128(v10, 8).m128i_u64[0] )
  {
    v11 = v25;
    while ( 1 )
    {
      v24 = 0;
      v12 = (unsigned __int64 *)&v27;
      v13 = 0;
      LODWORD(v9) = 0;
      do
      {
        if ( _BitScanForward64((unsigned __int64 *)&v15, *v12) )
        {
          v13 = 1;
          v8 = v9 + v15;
        }
        v9 = (unsigned int)(v9 + 64);
        ++v12;
      }
      while ( (unsigned int)v9 < 0x80 );
      v24 = v8;
      if ( !v13 )
        break;
      v27.m128i_i64[(unsigned __int64)v8 >> 6] &= ~(1LL << (v8 & 0x3F));
      v16 = ((*((_BYTE *)&PpmPolicyConfigTable + 40 * v8 + 37) & 4) != 0) + 1;
      v17 = 0;
      do
      {
        v18 = LODWORD((&PpmPolicyConfigTable)[5 * v8 + 4]);
        v19 = &(&PpmPolicyConfigTable)[5 * v8 + 3][v17 * LODWORD((&PpmPolicyConfigTable)[5 * v8 + 4])];
        if ( RtlCompareMemory(&v19[a2], &v19[v11], v18) != v18 )
        {
          v20 = *((unsigned __int8 *)&PpmPolicyConfigTable + 40 * v8 + 36);
          v26.m128i_i64[v20 >> 6] |= 1LL << (v20 & 0x3F);
        }
        ++v17;
      }
      while ( v17 < v16 );
      v8 = v24;
    }
    v4 = v23;
    v21 = (__m128i)_mm_or_ps((__m128)0LL, (__m128)_mm_loadu_si128(&v26));
    if ( v21.m128i_i64[0] | _mm_srli_si128(v21, 8).m128i_u64[0] )
    {
      PpmGetPolicyAction(&v26, &v23);
      v4 = v23;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    PpmReapplyIdlePolicy(v9);
    v4 &= ~1u;
    v23 = v4;
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  if ( (_WORD)v4 )
    return PpmReapplyPerfPolicy(&v23);
  else
    return PpmReleaseLock(&PpmPerfPolicyLock);
}
