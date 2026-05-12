/*
 * XREFs of DhGetKeyLength @ 0x1400DD608
 * Callers:
 *     NvmeFabricControllerQueueComputeCtrlAugmentedChallenge @ 0x1400F63E0 (NvmeFabricControllerQueueComputeCtrlAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400F69D8 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     BuildNvmeAuthReplyMessage @ 0x140118FDC (BuildNvmeAuthReplyMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DhGetKeyLength(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 256LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 384LL;
  if ( v2 == 1 )
    return 512LL;
  return 0LL;
}
