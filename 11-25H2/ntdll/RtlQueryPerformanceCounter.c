/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18008E010
 * Callers:
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x180090FE0 (EtwpReserveTraceBuffer.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     RtlGetMultiTimePrecise @ 0x1800B64E0 (RtlGetMultiTimePrecise.c)
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 *     RtlDelayExecution @ 0x1800CE100 (RtlDelayExecution.c)
 *     PsspSampleCounters @ 0x1801149C4 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180163840 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v5; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_2;
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
    {
LABEL_2:
      NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
      *PerformanceCounter = PerformanceCountera;
      return 1;
    }
    if ( MEMORY[0x7FFE03C6] >= 0 )
    {
      if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
      {
        _mm_lfence();
      }
      else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      {
        _mm_mfence();
      }
      v1 = __rdtsc();
      LODWORD(v2) = HIDWORD(v1);
      v1 = (unsigned int)v1;
      v2 = (unsigned int)v2;
    }
    else
    {
      __asm { rdtscp }
    }
    v5 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
       + (((v1 | (v2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
  }
  else if ( MEMORY[0x7FFE03C6] < 0 )
  {
    __asm { rdtscp }
    v5 = v1 | (v2 << 32);
  }
  else if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
  {
    _mm_lfence();
    v5 = __rdtsc();
  }
  else
  {
    if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      _mm_mfence();
    v5 = __rdtsc();
  }
  PerformanceCounter->QuadPart = v5 + MEMORY[0x7FFE03B8];
  return 1;
}
