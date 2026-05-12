/*
 * XREFs of StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018C338
 * Callers:
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400AFA58 (StorpInitializeNvmeNamespaceTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400BCF90 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 *     StorpInitializeNvmePerNamespaceIoSizeDistribution @ 0x14018C244 (StorpInitializeNvmePerNamespaceIoSizeDistribution.c)
 */

__int64 __fastcall StorpInitializeNvmePerNamespacePerfTelemetry(__int64 *a1)
{
  bool v1; // zf
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 Pool; // rax
  __int64 v6; // rax
  __int64 v7; // rdx

  v1 = FeatureFixTRIMAddSCSIPassthrough == 0;
  v3 = 0;
  *(_QWORD *)(a1[76] + 8) = 0LL;
  *(_QWORD *)(a1[76] + 32) = 0LL;
  *(_QWORD *)(a1[76] + 16) = 0LL;
  *(_QWORD *)(a1[76] + 40) = 0LL;
  *(_QWORD *)(a1[76] + 48) = 0LL;
  *(_QWORD *)(a1[76] + 88) = 0LL;
  *(_QWORD *)(a1[76] + 96) = 0LL;
  *(_QWORD *)(a1[76] + 2304) = 0LL;
  *(_QWORD *)(a1[76] + 2312) = 0LL;
  *(_DWORD *)a1[76] = 0;
  if ( !v1 )
    *(_QWORD *)(a1[76] + 2320) = -1LL;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    *(_QWORD *)(a1[76] + 8) = RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, a1[1]);
    if ( !*(_QWORD *)(a1[76] + 8)
      || (*(_QWORD *)(a1[76] + 32) = RaidAllocatePool(72LL, (unsigned int)dword_140170E38, 1700028754LL, a1[1])) == 0LL )
    {
      v3 = -1073741801;
      StorpUninitializeNvmePerNamespacePerfTelemetry((__int64)a1);
      return v3;
    }
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a1[76] + 24) = PerformanceCounter;
    Pool = RaidAllocatePool(72LL, (unsigned int)dword_140170E54, 1700028754LL, a1[1]);
    v1 = g_StorpTraceLoggingIoSizeDistributionEnabled == 0;
    *(_QWORD *)(a1[76] + 48) = Pool;
    v6 = a1[76];
    *(_OWORD *)(v6 + 56) = 0LL;
    *(_OWORD *)(v6 + 72) = 0LL;
    if ( !v1 )
    {
      v3 = StorpInitializeNvmePerNamespaceIoSizeDistribution(a1);
      if ( v3 )
      {
        StorEtwNvmeNamespaceEvent(
          (__int64)a1,
          1,
          3,
          (__int64)L"Initializing IO size distribution telemetry failed.",
          L"NtStatus",
          v3,
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
        v3 = 0;
      }
    }
  }
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      v7 = ((unsigned __int64)(10000 * QpcFrequency.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      *(_QWORD *)(a1[76] + 2320) = (v7 + ((unsigned __int64)(10000 * QpcFrequency.QuadPart - v7) >> 1)) >> 9;
    }
    else
    {
      *(_QWORD *)(a1[76] + 2320) = 100000000LL;
    }
  }
  return v3;
}
