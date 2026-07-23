/*
 * XREFs of RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148900
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x18015289C (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x180173254 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllInternalRuntimeFeatureConfigurations(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // r15
  int AllInternalFeatureConfigurationsFromBufferSet; // ebx
  int AllGovernedFeaturesFromBufferSet; // eax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v7 = a2;
  LOBYTE(a2) = 1;
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                                    (__int64)a1,
                                                    a2,
                                                    &v13,
                                                    &v12);
  if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                      v12,
                                                      1LL,
                                                      v7,
                                                      a3);
    if ( (int)(AllInternalFeatureConfigurationsFromBufferSet + 0x80000000) < 0
      || AllInternalFeatureConfigurationsFromBufferSet == -2147483643 )
    {
      AllGovernedFeaturesFromBufferSet = RtlpFcQueryAllGovernedFeaturesFromBufferSet(v12, a4, a5);
      if ( ((AllGovernedFeaturesFromBufferSet + 0x80000000) & 0x80000000) != 0
        || AllGovernedFeaturesFromBufferSet == -2147483643 )
      {
        if ( AllInternalFeatureConfigurationsFromBufferSet == -2147483643
          || AllGovernedFeaturesFromBufferSet == -2147483643 )
        {
          AllInternalFeatureConfigurationsFromBufferSet = -2147483643;
        }
        else
        {
          if ( a1 )
            *a1 = v13;
          AllInternalFeatureConfigurationsFromBufferSet = 0;
        }
      }
      else
      {
        AllInternalFeatureConfigurationsFromBufferSet = AllGovernedFeaturesFromBufferSet;
      }
    }
  }
  if ( v12 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801D5CE8, v12);
  return (unsigned int)AllInternalFeatureConfigurationsFromBufferSet;
}
