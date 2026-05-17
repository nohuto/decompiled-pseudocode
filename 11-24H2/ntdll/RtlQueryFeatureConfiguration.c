/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1800D6290
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800D61C4 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     RtlpFtInitialize @ 0x180145F1C (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D63CC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D6520 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D6FB0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011C7F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x18011C8AC (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180171730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // r15d
  int v8; // ebx
  int v9; // eax
  __m128i v10; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  __m128i v16; // [rsp+30h] [rbp-28h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v7 = a1;
  v16 = 0LL;
  if ( !a2 )
  {
    v8 = RtlQueryInternalFeatureConfiguration(a1, 1LL, &v14, &v16);
    if ( v8 >= 0 && (v16.m128i_i8[12] & 1) != 0 )
    {
      v12 = v16;
      v13 = v14;
      *(_QWORD *)a4 = v16.m128i_i64[0];
      *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
      *a3 = v13;
      return (unsigned int)v8;
    }
  }
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0LL, &v14, &v15) < 0 )
  {
    v8 = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, &v16);
    if ( !v8 )
      RtlpFcConvertFeatureConfigurationsInternalToExternal(&v16, a4, 1LL);
    goto LABEL_8;
  }
  v9 = RtlpFcQueryFeatureConfigurationFromBufferSet(v15, v7, a2, &v16);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = v16;
    v8 = 0;
    *(_QWORD *)a4 = v16.m128i_i64[0];
    *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
LABEL_7:
    *a3 = v14;
    goto LABEL_8;
  }
  if ( v9 == -1073741275 || v9 == -2147483614 )
    goto LABEL_7;
LABEL_8:
  if ( v15 )
    RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D3C88, v15);
  return (unsigned int)v8;
}
