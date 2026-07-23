/*
 * XREFs of FsRtlpOplockPerfInitializeLatencyInfo @ 0x1407097C8
 * Callers:
 *     FsRtlInitializeOplockPerf @ 0x140C1B2E8 (FsRtlInitializeOplockPerf.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     FsRtlpComputeLargeRatio @ 0x14057E098 (FsRtlpComputeLargeRatio.c)
 */

__int64 FsRtlpOplockPerfInitializeLatencyInfo()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax
  LARGE_INTEGER v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  word_140E65D58 = 15;
  v4.QuadPart = 0LL;
  KeQueryPerformanceCounter(&v4);
  v1 = 16LL;
  qword_140E65D50 = v4.QuadPart;
  do
  {
    v2 = g_OplockPerfLatencyLevelsNs[v0];
    *(_QWORD *)((char *)&unk_140E65CD0 + v0 * 8) = v2;
    if ( v2 == 0x7FFFFFFFFFFFFFFFLL )
      result = 0x7FFFFFFFFFFFFFFFLL;
    else
      result = FsRtlpComputeLargeRatio(v2, qword_140E65D50, 1000000000LL);
    g_OplockPerfLatencyLevels[v0++] = result;
    --v1;
  }
  while ( v1 );
  return result;
}
