/*
 * XREFs of StorpUninitializeNvmeNamespaceTelemetry @ 0x1400BCEE4
 * Callers:
 *     NvmeNamespaceDeleteDeviceIrp @ 0x1400FD7E8 (NvmeNamespaceDeleteDeviceIrp.c)
 *     NvmeNamespaceDisableDeviceIrp @ 0x1400FE41C (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400BCF90 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 */

__int64 __fastcall StorpUninitializeNvmeNamespaceTelemetry(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL) &= ~2u;
  v1 = *(_QWORD *)(a1 + 608);
  result = *(unsigned int *)(v1 + 4);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(v1 + 4) = result & 0xFFFFFFFE;
    return StorpUninitializeNvmePerNamespacePerfTelemetry(a1);
  }
  return result;
}
