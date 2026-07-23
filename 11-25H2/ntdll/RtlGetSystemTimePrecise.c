/*
 * XREFs of RtlGetSystemTimePrecise @ 0x1800912F0
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x180090FE0 (EtwpReserveTraceBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180092CAC (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180163840 (NtQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char v5; // di
  LARGE_INTEGER v6; // rbp
  LARGE_INTEGER v7; // rdx
  __int64 v8; // rdx
  LARGE_INTEGER result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    v0 = MEMORY[0x7FFE0340];
    v1 = 2147352596LL;
    for ( i = 2147353432LL; (MEMORY[0x7FFE0340] & 1) != 0; v0 = MEMORY[0x7FFE0340] )
      _mm_pause();
    v3 = MEMORY[0x7FFE0348];
    v4 = MEMORY[0x7FFE0358];
    v5 = MEMORY[0x7FFE0368];
    v6.QuadPart = MEMORY[0x7FFE0014];
    if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    {
LABEL_4:
      NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
      v7 = PerformanceCounter;
      goto LABEL_5;
    }
    if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
    {
      if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
        goto LABEL_4;
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
        i = __rdtsc();
        LODWORD(v1) = HIDWORD(i);
        i = (unsigned int)i;
        v1 = (unsigned int)v1;
      }
      else
      {
        __asm { rdtscp }
      }
      v7.QuadPart = MEMORY[0x7FFE03B8]
                  + *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
                  + (((i | (v1 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    }
    else if ( MEMORY[0x7FFE03C6] < 0 )
    {
      __asm { rdtscp }
      v7.QuadPart = MEMORY[0x7FFE03B8] + 0x7FFE00147FFE0358LL;
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
      v7.QuadPart = MEMORY[0x7FFE03B8] + __rdtsc();
    }
    else
    {
      if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        _mm_mfence();
      v7.QuadPart = MEMORY[0x7FFE03B8] + __rdtsc();
    }
LABEL_5:
    if ( MEMORY[0x7FFE0340] == v0 )
      break;
    _mm_pause();
  }
  if ( v7.QuadPart <= v3 )
  {
    return v6;
  }
  else
  {
    v8 = v7.QuadPart - v3 - 1;
    if ( v5 )
      v8 <<= v5;
    result.QuadPart = (((unsigned __int64)v8 * (unsigned __int128)v4) >> 64) + v6.QuadPart;
  }
  return result;
}
