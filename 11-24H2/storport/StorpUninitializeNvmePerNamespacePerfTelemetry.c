/*
 * XREFs of StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400BCF90
 * Callers:
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400AFA58 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     StorpUninitializeNvmeNamespaceTelemetry @ 0x1400BCEE4 (StorpUninitializeNvmeNamespaceTelemetry.c)
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018C338 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 * Callees:
 *     StorpUninitializeNvmePerNamespaceIoSizeDistribution @ 0x1400BCF18 (StorpUninitializeNvmePerNamespaceIoSizeDistribution.c)
 */

__int64 __fastcall StorpUninitializeNvmePerNamespacePerfTelemetry(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)(*(_QWORD *)(a1 + 608) + 8LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)(a1 + 608) + 32LL);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 32LL) = 0LL;
  }
  v4 = *(void **)(*(_QWORD *)(a1 + 608) + 48LL);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 48LL) = 0LL;
  }
  return StorpUninitializeNvmePerNamespaceIoSizeDistribution(a1);
}
