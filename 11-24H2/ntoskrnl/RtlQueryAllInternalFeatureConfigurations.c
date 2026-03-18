/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x1405E8FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A68E8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6924 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x1405F2A18 (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406FC0E0 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(unsigned int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *BufferManager; // rbp
  int AllInternalFeatureConfigurationsFromBufferSet; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  BufferManager = (volatile signed __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)&v12, &v11);
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                    v11,
                                                    a1,
                                                    a3,
                                                    a4);
  if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
  {
    if ( a2 )
      *a2 = v12;
    AllInternalFeatureConfigurationsFromBufferSet = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v11);
  return (unsigned int)AllInternalFeatureConfigurationsFromBufferSet;
}
