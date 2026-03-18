/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x140A3EC4C
 * Callers:
 *     PpmProfileAcDcUpdate @ 0x140A3E764 (PpmProfileAcDcUpdate.c)
 *     PpmApplyProfile @ 0x140A3EA68 (PpmApplyProfile.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x140A3F1DC (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x140A936D0 (PpmReapplyIdlePolicy.c)
 */

LONG __fastcall PpmCompareAndApplyPolicySettings(const __m128i *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // r12d
  __m128i v6; // xmm1
  unsigned __int64 *v9; // rdx
  char v10; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  unsigned int v14; // r14d
  SIZE_T v15; // rdi
  char *v16; // r8
  unsigned __int64 v17; // rcx
  __m128i v18; // xmm6
  int v19; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-4Ch]
  __m128i v21; // [rsp+30h] [rbp-40h] BYREF
  __m128i v22; // [rsp+40h] [rbp-30h] BYREF

  v4 = 0;
  v19 = 0;
  v5 = 0;
  if ( PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v4 = 4098;
    v19 = 4098;
  }
  v21 = 0LL;
  v6 = (__m128i)_mm_and_ps(
                  (__m128)_mm_loadu_si128(a1),
                  (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicySettingGlobalMask));
  v22 = v6;
  if ( v6.m128i_i64[0] | _mm_srli_si128(v6, 8).m128i_u64[0] )
  {
    while ( 1 )
    {
      v20 = 0;
      v9 = (unsigned __int64 *)&v22;
      v10 = 0;
      LODWORD(a1) = 0;
      do
      {
        if ( _BitScanForward64((unsigned __int64 *)&v12, *v9) )
        {
          v10 = 1;
          v5 = (_DWORD)a1 + v12;
        }
        a1 = (const __m128i *)(unsigned int)((_DWORD)a1 + 64);
        ++v9;
      }
      while ( (unsigned int)a1 < 0x80 );
      v20 = v5;
      if ( !v10 )
        break;
      v13 = 0;
      v22.m128i_i64[(unsigned __int64)v5 >> 6] &= ~(1LL << (v5 & 0x3F));
      v14 = ((*((_BYTE *)&PpmPolicyConfigTable + 40 * v5 + 37) & 4) != 0) + 1;
      do
      {
        v15 = LODWORD((&PpmPolicyConfigTable)[5 * v5 + 4]);
        v16 = &(&PpmPolicyConfigTable)[5 * v5 + 3][v13 * LODWORD((&PpmPolicyConfigTable)[5 * v5 + 4])];
        if ( RtlCompareMemory(&v16[a2], &v16[a3], v15) != v15 )
        {
          v17 = *((unsigned __int8 *)&PpmPolicyConfigTable + 40 * v5 + 36);
          v21.m128i_i64[v17 >> 6] |= 1LL << (v17 & 0x3F);
        }
        ++v13;
      }
      while ( v13 < v14 );
      v5 = v20;
    }
    v4 = v19;
    v18 = (__m128i)_mm_or_ps((__m128)0LL, (__m128)_mm_loadu_si128(&v21));
    if ( v18.m128i_i64[0] | _mm_srli_si128(v18, 8).m128i_u64[0] )
    {
      PpmGetPolicyAction(&v21, &v19);
      v4 = v19;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    PpmReapplyIdlePolicy(a1);
    v4 &= ~1u;
    v19 = v4;
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  if ( (_WORD)v4 )
    return PpmReapplyPerfPolicy(&v19);
  else
    return PpmReleaseLock(&PpmPerfPolicyLock);
}
