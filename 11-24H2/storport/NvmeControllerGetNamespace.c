/*
 * XREFs of NvmeControllerGetNamespace @ 0x1400EEC74
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400DF110 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F41F8 (NvmeControllerRequeueSQPendingRequests.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400F8EB4 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeAdapterPassThrough @ 0x14019A9EC (NvmeAdapterPassThrough.c)
 * Callees:
 *     StorFindDictionary @ 0x1400304A0 (StorFindDictionary.c)
 */

__int64 __fastcall NvmeControllerGetNamespace(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return 0LL;
  if ( (int)StorFindDictionary(a1 + 664, a2, &v4) >= 0 )
    return v4 - 40;
  return v2;
}
