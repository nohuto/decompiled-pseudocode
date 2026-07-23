/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800D85B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180163840 (NtQueryPerformanceCounter.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 QuadPart; // rdx
  __int64 v2; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v4; // rdi
  LARGE_INTEGER v5; // rsi
  __int64 v6; // rdx
  LARGE_INTEGER result; // rax
  LARGE_INTEGER PerformanceCountera; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v2 = MEMORY[0x7FFE0340];
    for ( i = 2147353528LL; (MEMORY[0x7FFE0340] & 1) != 0; v2 = MEMORY[0x7FFE0340] )
      _mm_pause();
    v4 = MEMORY[0x7FFE0350];
    v5.QuadPart = MEMORY[0x7FFE0008];
    if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    {
LABEL_4:
      NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
      QuadPart = PerformanceCountera.QuadPart;
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
        LODWORD(QuadPart) = HIDWORD(i);
        i = (unsigned int)i;
        QuadPart = (unsigned int)QuadPart;
      }
      else
      {
        __asm { rdtscp }
      }
      QuadPart = MEMORY[0x7FFE03B8]
               + *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
               + (((i | (QuadPart << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    }
    else if ( MEMORY[0x7FFE03C6] < 0 )
    {
      __asm { rdtscp }
      QuadPart = MEMORY[0x7FFE03B8] + ((QuadPart << 32) | 0x7FFE03B8);
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
      QuadPart = MEMORY[0x7FFE03B8] + __rdtsc();
    }
    else
    {
      if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        _mm_mfence();
      QuadPart = MEMORY[0x7FFE03B8] + __rdtsc();
    }
LABEL_5:
    if ( MEMORY[0x7FFE0340] == v2 )
      break;
    _mm_pause();
  }
  PerformanceCounter->QuadPart = QuadPart;
  if ( QuadPart <= v4 )
  {
    return v5;
  }
  else
  {
    v6 = QuadPart - v4 - 1;
    if ( MEMORY[0x7FFE0369] )
      v6 <<= MEMORY[0x7FFE0369];
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64) + v5.QuadPart;
  }
  return result;
}
