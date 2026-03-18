/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1403BA040
 * Callers:
 *     ApiSetpResolveHost @ 0x1406551AC (ApiSetpResolveHost.c)
 *     CmQuerySingleFeatureConfiguration @ 0x1406EE3D4 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A9F348 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA2F6C (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlAcquireSwapReference @ 0x1403B8A54 (RtlAcquireSwapReference.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpFcGetBufferManager @ 0x1406F0300 (RtlpFcGetBufferManager.c)
 *     RtlpFcEnterRegion @ 0x140A767A4 (RtlpFcEnterRegion.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140AC8970 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
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
  if ( ObGetCurrentIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
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
  RtlpFcBufferManagerDereferenceBuffers((__int64)BufferManager, (__int64)&BufferManager[v12 + 3]);
  return v14;
}
