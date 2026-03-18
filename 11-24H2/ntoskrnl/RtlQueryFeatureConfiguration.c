/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1403A7E90
 * Callers:
 *     CmQuerySingleFeatureConfiguration @ 0x1406FA258 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140AA4B68 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA7F7C (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     RtlAcquireSwapReference @ 0x1403A4E34 (RtlAcquireSwapReference.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A68E8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F9F24 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406FC0E0 (RtlpFcGetBufferManager.c)
 *     RtlpFcEnterRegion @ 0x140A78578 (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 *BufferManager; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r15
  int v13; // eax
  unsigned int v14; // ebx
  __m128i v15; // xmm1
  __m128i v16; // [rsp+20h] [rbp-58h] BYREF

  v16 = 0LL;
  if ( KeGetEffectiveIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = (__int64 *)RtlpFcGetBufferManager();
  RtlpFcEnterRegion();
  v10 = RtlAcquireSwapReference(BufferManager);
  v11 = BufferManager[v10 + 27];
  v12 = 12LL * v10;
  v13 = RtlpFcQueryFeatureConfigurationFromBufferSet(&BufferManager[v12 + 3], a1, a2, &v16);
  v14 = v13;
  if ( v13 < 0 )
  {
    if ( v13 != -1073741275 && v13 != -2147483614 )
      goto LABEL_8;
  }
  else
  {
    v15 = v16;
    v14 = 0;
    *(_QWORD *)a4 = v16.m128i_i64[0];
    *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
  }
  *a3 = v11;
LABEL_8:
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, (__int64)&BufferManager[v12 + 3]);
  return v14;
}
