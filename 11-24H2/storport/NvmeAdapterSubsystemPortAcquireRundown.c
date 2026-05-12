/*
 * XREFs of NvmeAdapterSubsystemPortAcquireRundown @ 0x1400DABE8
 * Callers:
 *     NvmeAdapterFindNvmeController @ 0x1400CFE44 (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400CFFC4 (NvmeAdapterFindSubsystemPort.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400E66F0 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterAddSubsystemPort @ 0x14019363C (NvmeAdapterAddSubsystemPort.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019A0F8 (NvmeAdapterGetSubsystemPorts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterSubsystemPortAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 40)) == 0 ? 0xC0000056 : 0;
}
