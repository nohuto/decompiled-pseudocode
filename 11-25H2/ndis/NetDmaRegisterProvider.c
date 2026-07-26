/*
 * XREFs of NetDmaRegisterProvider @ 0x1400B8D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NetDmaRegisterProvider(
        PVOID ProviderContext,
        PVOID *pNetDmaProviderHandle,
        PNET_DMA_PROVIDER_CHARACTERISTICS ProviderCharacteristics)
{
  *pNetDmaProviderHandle = 0LL;
  return 0;
}
