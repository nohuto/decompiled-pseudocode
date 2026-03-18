/*
 * XREFs of RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405DCF30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x1405E66C8 (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406F0300 (RtlpFcGetBufferManager.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x14077E108 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllInternalRuntimeFeatureConfigurations(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 BufferManager; // rbp
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned int AllInternalFeatureConfigurationsFromBufferSet; // eax
  unsigned int v13; // ebx
  unsigned int AllGovernedFeaturesFromBufferSet; // eax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+28h] [rbp-20h] BYREF

  v17[0] = 0LL;
  v16 = 0LL;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, (__int64)v17, &v16);
  v10 = a2;
  v11 = v16;
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                    v16,
                                                    1LL,
                                                    v10,
                                                    a3);
  v13 = AllInternalFeatureConfigurationsFromBufferSet;
  if ( (int)(AllInternalFeatureConfigurationsFromBufferSet + 0x80000000) < 0
    || AllInternalFeatureConfigurationsFromBufferSet == -2147483643 )
  {
    AllGovernedFeaturesFromBufferSet = RtlpFcQueryAllGovernedFeaturesFromBufferSet(v11, a4, a5);
    if ( ((AllGovernedFeaturesFromBufferSet + 0x80000000) & 0x80000000) != 0
      || AllGovernedFeaturesFromBufferSet == -2147483643 )
    {
      if ( v13 == -2147483643 || AllGovernedFeaturesFromBufferSet == -2147483643 )
      {
        v13 = -2147483643;
      }
      else
      {
        if ( a1 )
          *a1 = v17[0];
        v13 = 0;
      }
    }
    else
    {
      v13 = AllGovernedFeaturesFromBufferSet;
    }
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v11);
  return v13;
}
