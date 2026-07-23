/*
 * XREFs of RtlGetMultiTimePrecise @ 0x1800B64E0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1801116B0 (RtlConvertHostPerfCounterToPerfCounter.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x1800B66C0 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  char v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // ebp
  int v7; // esi
  __int64 TickLock; // rdi
  __int64 v9; // rbx
  LARGE_INTEGER v10; // rdx
  int v11; // r14d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  unsigned __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+A8h] [rbp+10h]

  v22 = a2;
  v3 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    v5 = RtlpHypervisorSharedUserVa;
    v6 = a2 & 4;
    v7 = a2 & 2;
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(2147353408LL);
      if ( v6 )
      {
        v4 = MEMORY[0x7FFE0348];
        v3 = MEMORY[0x7FFE0368];
        v19 = MEMORY[0x7FFE0358];
        v20 = MEMORY[0x7FFE0014];
      }
      if ( v7 && v5 )
      {
        do
        {
          do
          {
            v13 = *(_QWORD *)(v5 + 24);
            v14 = MEMORY[0x7FFE03B8];
            v18 = MEMORY[0x7FFE03B8];
            v17 = v13;
            RtlQueryPerformanceCounter(&PerformanceCounter);
          }
          while ( v17 != *(_QWORD *)(v5 + 24) );
        }
        while ( v14 != MEMORY[0x7FFE03B8] );
      }
      else
      {
        RtlQueryPerformanceCounter(&PerformanceCounter);
      }
      if ( MEMORY[0x7FFE0340] == TickLock )
        break;
      _mm_pause();
    }
    v9 = 0LL;
    v10 = PerformanceCounter;
    v11 = 0;
    if ( (v22 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v11 = 1;
    }
    if ( v7 && v17 )
    {
      a1[1].QuadPart = v10.QuadPart + v17 - v18;
      v11 |= 2u;
    }
    if ( v6 )
    {
      if ( v10.QuadPart > v4 )
      {
        v15 = v10.QuadPart - v4 - 1;
        if ( v3 )
          v15 <<= v3;
        v9 = ((unsigned __int64)v15 * (unsigned __int128)v19) >> 64;
      }
      a1[2].QuadPart = v9 + v20;
      v11 |= 4u;
    }
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
