/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x140496030
 * Callers:
 *     CmQuerySingleFeatureConfiguration @ 0x1406F7E98 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A9FE68 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140AA307C (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14021E2E4 (RtlAcquireSwapReference.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F7B64 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406F9D20 (RtlpFcGetBufferManager.c)
 *     RtlpFcEnterRegion @ 0x140A72878 (RtlpFcEnterRegion.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  __int64 *BufferManager; // rsi
  unsigned int v10; // eax
  ULONGLONG v11; // rdi
  __int64 v12; // r15
  int v13; // eax
  NTSTATUS v14; // ebx
  __m128i v15; // xmm1
  __m128i v16; // [rsp+20h] [rbp-58h] BYREF

  v16 = 0LL;
  if ( KeGetEffectiveIrql(*(__int64 *)&FeatureId, *(__int64 *)&ConfigurationType) > 1u
    && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
  {
    return -2147483614;
  }
  BufferManager = (__int64 *)RtlpFcGetBufferManager();
  RtlpFcEnterRegion();
  v10 = RtlAcquireSwapReference(BufferManager);
  v11 = BufferManager[v10 + 27];
  v12 = 12LL * v10;
  v13 = RtlpFcQueryFeatureConfigurationFromBufferSet(
          &BufferManager[v12 + 3],
          FeatureId,
          (unsigned int)ConfigurationType,
          &v16);
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
    *(_QWORD *)&FeatureConfiguration->FeatureId = v16.m128i_i64[0];
    FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
  }
  *ChangeStamp = v11;
LABEL_8:
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, &BufferManager[v12 + 3]);
  return v14;
}
