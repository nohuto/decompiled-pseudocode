/*
 * XREFs of NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400CCA08 (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterFindNvmeController @ 0x1400CFE44 (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400CFFC4 (NvmeAdapterFindSubsystemPort.c)
 *     NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400D6958 (NvmeAdapterRemoveSubsystemPortMiniport.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400E66F0 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterGetHostGatewayByHandle @ 0x140198090 (NvmeAdapterGetHostGatewayByHandle.c)
 *     NvmeAdapterGetHostGateways @ 0x14019856C (NvmeAdapterGetHostGateways.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019A0F8 (NvmeAdapterGetSubsystemPorts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterHostGatewayAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56)) == 0 ? 0xC0000056 : 0;
}
