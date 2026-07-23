/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x1800A02B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18017360C (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  PRTL_FEATURE_CHANGE_STAMP v6; // rsi
  NTSTATUS AllFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  v6 = ChangeStamp;
  LOBYTE(ChangeStamp) = 1;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                            *(__int64 *)&ConfigurationType,
                                            (__int64)ChangeStamp,
                                            v11,
                                            &v10);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(
                                              v10,
                                              (unsigned int)ConfigurationType,
                                              Configurations,
                                              ConfigurationCount);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( v6 )
        *v6 = v11[0];
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801D5CE8, v10);
  return AllFeatureConfigurationsFromBufferSet;
}
