/*
 * XREFs of NvmeNamespaceUnlockIoQueue @ 0x1401152B4
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall NvmeNamespaceUnlockIoQueue(__int64 a1)
{
  volatile signed __int32 *result; // rax

  result = *(volatile signed __int32 **)(a1 + 256);
  _interlockedbittestandreset(result, 2u);
  if ( FeatureFixFUAForReadIoPerf )
  {
    result = *(volatile signed __int32 **)(a1 + 264);
    _interlockedbittestandreset(result, 2u);
  }
  return result;
}
