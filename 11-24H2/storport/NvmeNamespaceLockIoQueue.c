/*
 * XREFs of NvmeNamespaceLockIoQueue @ 0x140105324
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x14013476C (NvmeNamespaceProcessSetDevicePowerIrp.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall NvmeNamespaceLockIoQueue(__int64 a1)
{
  volatile signed __int32 *result; // rax

  result = *(volatile signed __int32 **)(a1 + 256);
  _interlockedbittestandset(result, 2u);
  if ( FeatureFixFUAForReadIoPerf )
  {
    result = *(volatile signed __int32 **)(a1 + 264);
    _interlockedbittestandset(result, 2u);
  }
  return result;
}
