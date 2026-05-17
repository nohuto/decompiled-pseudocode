/*
 * XREFs of RtlGetMultiTimePrecise @ 0x1800B64E0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1801116B0 (RtlConvertHostPerfCounterToPerfCounter.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x1800B66C0 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(unsigned __int64 *a1, int a2, int *a3)
{
  char v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // ebp
  int v7; // esi
  __int64 v8; // rdx
  __int64 TickLock; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  int v12; // r14d
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  unsigned __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  char v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v3 = 0;
  v17 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
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
        v8 = MEMORY[0x7FFE0014];
        v4 = MEMORY[0x7FFE0348];
        v3 = MEMORY[0x7FFE0368];
        v20 = MEMORY[0x7FFE0358];
        v21 = MEMORY[0x7FFE0014];
      }
      if ( v7 && v5 )
      {
        do
        {
          do
          {
            v14 = *(_QWORD *)(v5 + 24);
            v15 = MEMORY[0x7FFE03B8];
            v19 = MEMORY[0x7FFE03B8];
            v18 = v14;
            RtlQueryPerformanceCounter(&v17, v8);
          }
          while ( v18 != *(_QWORD *)(v5 + 24) );
        }
        while ( v15 != MEMORY[0x7FFE03B8] );
      }
      else
      {
        RtlQueryPerformanceCounter(&v17, v8);
      }
      if ( MEMORY[0x7FFE0340] == TickLock )
        break;
      _mm_pause();
    }
    v10 = 0LL;
    v11 = v17;
    v12 = 0;
    if ( (v23 & 1) != 0 )
    {
      *a1 = v17;
      v12 = 1;
    }
    if ( v7 && v18 )
    {
      a1[1] = v11 + v18 - v19;
      v12 |= 2u;
    }
    if ( v6 )
    {
      if ( v11 > v4 )
      {
        v16 = v11 - v4 - 1;
        if ( v3 )
          v16 <<= v3;
        v10 = ((unsigned __int64)v16 * (unsigned __int128)v20) >> 64;
      }
      a1[2] = v10 + v21;
      v12 |= 4u;
    }
    *a3 = v12;
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
