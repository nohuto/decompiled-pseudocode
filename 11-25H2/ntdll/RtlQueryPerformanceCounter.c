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

__int64 __fastcall RtlQueryPerformanceCounter(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_2;
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
    {
LABEL_2:
      NtQueryPerformanceCounter(&v6, 0LL);
      *a1 = v6;
      return 1LL;
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
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v5 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
       + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
  }
  else if ( MEMORY[0x7FFE03C6] < 0 )
  {
    __asm { rdtscp }
    v5 = v2 | (a2 << 32);
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
  *a1 = v5 + MEMORY[0x7FFE03B8];
  return 1LL;
}
