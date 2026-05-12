/*
 * XREFs of NvmeControllerAcquireRundown @ 0x1400BEB10
 * Callers:
 *     NvmeControllerStartReenumeration @ 0x1400BF540 (NvmeControllerStartReenumeration.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterStorMQAddController @ 0x1400D95B8 (NvmeAdapterStorMQAddController.c)
 *     NvmeControllerCommandTimeoutDetectThread @ 0x140136CA0 (NvmeControllerCommandTimeoutDetectThread.c)
 *     NvmeAdapterAddController @ 0x140193078 (NvmeAdapterAddController.c)
 *     NvmeAdapterGetControllers @ 0x140197694 (NvmeAdapterGetControllers.c)
 *     NvmeAdapterGetNamespaces @ 0x140198EE8 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019943C (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerAcquireRundown(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 552)) == 0 ? 0xC0000056 : 0;
}
