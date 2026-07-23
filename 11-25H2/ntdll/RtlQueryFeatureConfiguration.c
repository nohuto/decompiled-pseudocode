/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x18009F560
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18009F48C (wil_RtlStagingConfig_QueryFeatureState.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180136EE4 (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetpResolveHost @ 0x180137594 (ApiSetpResolveHost.c)
 *     RtlpFtInitialize @ 0x1801474CC (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800A063C (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011E080 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x18011E13C (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180173730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  NTSTATUS v8; // ebx
  int v9; // eax
  __m128i v10; // xmm1
  __m128i v12; // xmm1
  ULONGLONG v13; // rax
  ULONGLONG v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  __m128i v16; // [rsp+30h] [rbp-28h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( ConfigurationType == RtlFeatureConfigurationBoot )
  {
    v8 = RtlQueryInternalFeatureConfiguration(FeatureId, 1LL, &v14, &v16);
    if ( v8 >= 0 && (v16.m128i_i8[12] & 1) != 0 )
    {
      v12 = v16;
      v13 = v14;
      *(_QWORD *)&FeatureConfiguration->FeatureId = v16.m128i_i64[0];
      FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
      *ChangeStamp = v13;
      return v8;
    }
  }
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(*(_QWORD *)&FeatureId, 0LL, &v14, &v15) < 0 )
  {
    v8 = RtlpFcQueryFeatureConfigurationFromKernel(FeatureId, (unsigned int)ConfigurationType, ChangeStamp, &v16);
    if ( !v8 )
      RtlpFcConvertFeatureConfigurationsInternalToExternal(&v16, FeatureConfiguration, 1LL);
    goto LABEL_8;
  }
  v9 = RtlpFcQueryFeatureConfigurationFromBufferSet(v15, FeatureId, (unsigned int)ConfigurationType, &v16);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = v16;
    v8 = 0;
    *(_QWORD *)&FeatureConfiguration->FeatureId = v16.m128i_i64[0];
    FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
LABEL_7:
    *ChangeStamp = v14;
    goto LABEL_8;
  }
  if ( v9 == -1073741275 || v9 == -2147483614 )
    goto LABEL_7;
LABEL_8:
  if ( v15 )
    RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D5CE8, v15);
  return v8;
}
