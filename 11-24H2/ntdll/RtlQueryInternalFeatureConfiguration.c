/*
 * XREFs of RtlQueryInternalFeatureConfiguration @ 0x18011AA20
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800D1600 (RtlQueryFeatureConfiguration.c)
 *     RtlpFtQueryConfiguration @ 0x18014435C (RtlpFtQueryConfiguration.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D173C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D1890 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D2320 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180170730 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryInternalFeatureConfiguration(__int64 a1, unsigned int a2, _QWORD *a3, _OWORD *a4)
{
  unsigned int v7; // r14d
  unsigned __int32 FeatureConfigurationFromKernel; // ebx
  int FeatureConfigurationFromBufferSet; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v7 = a1;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0LL, &v12, &v11) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, a4);
    goto LABEL_9;
  }
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v11, v7, a2, a4);
  FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    FeatureConfigurationFromKernel = 0;
LABEL_8:
    *a3 = v12;
    goto LABEL_9;
  }
  if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
    goto LABEL_8;
LABEL_9:
  if ( v11 )
    RtlpFcBufferManagerDereferenceBuffers((__int64)&xmmword_1801D2C88, v11);
  return FeatureConfigurationFromKernel;
}
