/*
 * XREFs of StorpUninitializeNvmePerNamespaceIoSizeDistribution @ 0x1400BCF18
 * Callers:
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400BCF90 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 *     StorpInitializeNvmePerNamespaceIoSizeDistribution @ 0x14018C244 (StorpInitializeNvmePerNamespaceIoSizeDistribution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpUninitializeNvmePerNamespaceIoSizeDistribution(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  *(_QWORD *)(a1 + 112) &= ~0x100uLL;
  v2 = *(void **)(*(_QWORD *)(a1 + 608) + 16LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 608) + 16LL) = 0LL;
  }
  result = *(_QWORD *)(a1 + 608);
  v4 = *(void **)(result + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    result = *(_QWORD *)(a1 + 608);
    *(_QWORD *)(result + 40) = 0LL;
  }
  return result;
}
