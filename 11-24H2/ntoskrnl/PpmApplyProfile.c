/*
 * XREFs of PpmApplyProfile @ 0x140A3CDF8
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x140A3CDE0 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x140A3D1F0 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x140A3D2A0 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3D2EC (PpmPostProcessMediaBuffering.c)
 */

LONG __fastcall PpmApplyProfile(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  LONG result; // eax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdx
  __m128i *v13; // rcx
  __int64 v14; // r8
  __m128i *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __m128i v19; // [rsp+20h] [rbp-48h] BYREF
  __m128 v20; // [rsp+30h] [rbp-38h] BYREF

  v3 = dword_140F0B38C;
  v19 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v6 = PpmCurrentProfile[0];
  v7 = PpmDefaultProfile;
  if ( a1 )
    v7 = a1;
  if ( v7 == (__int64 *)PpmLowPowerProfile )
  {
    v9 = v7;
    v7 = PpmDefaultProfile;
    if ( !PpmPerfMultimediaQosSupported )
      v7 = v9;
  }
  if ( PpmCurrentProfile[0] == v7 )
  {
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v10 = PpmEndProfileAccumulation(PpmCurrentProfile[0], MEMORY[0xFFFFF78000000008], v5);
    *((_DWORD *)v7 + 7) |= 2u;
    v11 = 2LL;
    *((_DWORD *)v6 + 7) &= ~2u;
    PpmCurrentProfile[0] = v7;
    v12 = 0LL;
    v7[127] = v10;
    do
    {
      if ( v7 != PpmDefaultProfile )
      {
        v13 = &v19;
        v14 = 2LL;
        do
        {
          v13->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v13[2].m128i_u64[1]
                                                   + (_QWORD)&v7[v12]
                                                   + 488 * v3
                                                   - (_QWORD)&v19);
          v13 = (__m128i *)((char *)v13 + 8);
          --v14;
        }
        while ( v14 );
      }
      if ( v6 != PpmDefaultProfile )
      {
        v15 = &v19;
        v16 = 2LL;
        do
        {
          v15->m128i_i64[0] |= *(unsigned __int64 *)((char *)&v15[2].m128i_u64[1]
                                                   + (_QWORD)&v6[v12]
                                                   + 488 * v3
                                                   - (_QWORD)&v19);
          v15 = (__m128i *)((char *)v15 + 8);
          --v16;
        }
        while ( v16 );
      }
      v12 += 2LL;
      --v11;
    }
    while ( v11 );
    v20 = _mm_and_ps(
            (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicySettingGlobalMask),
            (__m128)_mm_loadu_si128(&v19));
    PpmCompareAndApplyPolicySettings(&v20, &v6[61 * v3 + 5], &v7[61 * v3 + 5], 0LL, v19.m128i_i64[0], v19.m128i_i64[1]);
    PpmEventTraceProfileChange(v6, v7);
    result = PpmLowPowerProfile;
    if ( PpmLowPowerProfile )
    {
      if ( v6 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v17, v18);
        return PpmPostProcessMediaBuffering();
      }
    }
  }
  return result;
}
