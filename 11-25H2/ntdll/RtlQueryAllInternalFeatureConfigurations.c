/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x180148850
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x18015289C (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rsi
  unsigned int v7; // r15d
  int AllInternalFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v6 = (_QWORD *)a2;
  LOBYTE(a2) = 1;
  v7 = a1;
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, &v11, &v10);
  if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                      v10,
                                                      v7,
                                                      a3,
                                                      a4);
    if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( v6 )
        *v6 = v11;
      AllInternalFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801D5CE8, v10);
  return (unsigned int)AllInternalFeatureConfigurationsFromBufferSet;
}
