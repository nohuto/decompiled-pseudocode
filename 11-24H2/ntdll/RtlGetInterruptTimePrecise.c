/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800DB220
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1801622B0 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v2 = MEMORY[0x7FFE0340];
    for ( i = 2147353528LL; (MEMORY[0x7FFE0340] & 1) != 0; v2 = MEMORY[0x7FFE0340] )
      _mm_pause();
    v4 = MEMORY[0x7FFE0350];
    v5 = MEMORY[0x7FFE0008];
    if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    {
LABEL_4:
      NtQueryPerformanceCounter(&v9, 0LL);
      a2 = v9;
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
        LODWORD(a2) = HIDWORD(i);
        i = (unsigned int)i;
        a2 = (unsigned int)a2;
      }
      else
      {
        __asm { rdtscp }
      }
      a2 = MEMORY[0x7FFE03B8]
         + *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
         + (((i | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    }
    else if ( MEMORY[0x7FFE03C6] < 0 )
    {
      __asm { rdtscp }
      a2 = MEMORY[0x7FFE03B8] + ((a2 << 32) | 0x7FFE03B8);
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
      a2 = MEMORY[0x7FFE03B8] + __rdtsc();
    }
    else
    {
      if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
        _mm_mfence();
      a2 = MEMORY[0x7FFE03B8] + __rdtsc();
    }
LABEL_5:
    if ( MEMORY[0x7FFE0340] == v2 )
      break;
    _mm_pause();
  }
  *a1 = a2;
  if ( a2 <= v4 )
    return v5;
  v6 = a2 - v4 - 1;
  if ( MEMORY[0x7FFE0369] )
    v6 <<= MEMORY[0x7FFE0369];
  return (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64) + v5;
}
