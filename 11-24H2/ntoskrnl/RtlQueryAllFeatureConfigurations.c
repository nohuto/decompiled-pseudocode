/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x140781BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcValidateFeatureConfigurationType @ 0x1404BB750 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1404F8C78 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 */

NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  unsigned int *v11; // rcx
  ULONG_PTR v12; // r8
  ULONG_PTR v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v16[2]; // [rsp+28h] [rbp-10h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  v6 = ConfigurationType;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF71C8, (__int64)v16, &v15);
  v8 = RtlpFcValidateFeatureConfigurationType(v6);
  v9 = v15;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0x100000000LL;
    v11 = *(unsigned int **)(v9 + 24LL * *((unsigned int *)&v16[-1] + v6) + 8);
    if ( v11 )
    {
      v12 = *v11;
      v13 = *ConfigurationCount;
      *ConfigurationCount = v12;
      if ( v12 > v13 )
      {
        v10 = -2147483643;
        goto LABEL_8;
      }
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)(v11 + 1), Configurations, v12);
    }
    else
    {
      *ConfigurationCount = 0LL;
    }
    v10 = 0;
  }
LABEL_8:
  if ( v10 >= 0 )
  {
    if ( ChangeStamp )
      *ChangeStamp = v16[0];
    v10 = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers(qword_140EF71C8, v9);
  return v10;
}
