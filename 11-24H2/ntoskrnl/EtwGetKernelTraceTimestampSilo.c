/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x14036E4E0
 * Callers:
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  int v5; // ebx
  _QWORD *v6; // r9
  __int64 v7; // r9
  unsigned int v8; // r8d
  bool i; // zf
  __int64 v10; // rcx
  __int64 v11; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax

  v3 = a2;
  v5 = 0;
  if ( a3 )
    v6 = *(_QWORD **)(a3 + 1504);
  else
    v6 = &PspHostSiloGlobals;
  v7 = v6[104];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v10, v8); !i; i = !_BitScanForward((unsigned int *)&v10, v8) )
    {
      v8 &= v8 - 1;
      v11 = v7 + 32 * v10 + 4556;
      if ( v11 && ((unsigned int)v3 & *(_DWORD *)(v11 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        v5 |= 1 << *(_BYTE *)(v7 + 2 * v10 + 4505);
    }
    if ( (v5 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    LOBYTE(v5) = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  *a1 = PerformanceCounter;
  if ( (v5 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v5 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v5 & 0x10) != 0 )
  {
    result.QuadPart = EtwpGetHostPerfCounter(v10);
    a1[3] = result;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
