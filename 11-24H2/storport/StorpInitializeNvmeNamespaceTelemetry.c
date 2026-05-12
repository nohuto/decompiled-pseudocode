/*
 * XREFs of StorpInitializeNvmeNamespaceTelemetry @ 0x1400AFA58
 * Callers:
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400BCF90 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018C338 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 */

__int64 __fastcall StorpInitializeNvmeNamespaceTelemetry(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rdx
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 608);
  v3 = (_DWORD *)(v1 + 4);
  if ( !v1 || (result = (unsigned int)*v3, (result & 1) == 0) )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
    {
      v5 = StorpInitializeNvmePerNamespacePerfTelemetry(a1, v3);
      if ( v5 )
      {
        StorEtwNvmeNamespaceEvent(
          a1,
          1,
          3,
          (__int64)L"Initializing performance telemetry failed.",
          L"NtStatus",
          v5,
          0LL,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        StorpUninitializeNvmePerNamespacePerfTelemetry(a1);
        *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL) &= ~1u;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL) |= 1u;
      }
    }
    else
    {
      *v3 &= ~1u;
    }
    v6 = *(_QWORD *)(a1 + 608);
    result = (g_StorpTraceLoggingErrorDataEnabled != 0 ? 2 : 0) | *(_DWORD *)(v6 + 4) & 0xFFFFFFFD;
    *(_DWORD *)(v6 + 4) = result;
  }
  return result;
}
