/*
 * XREFs of RtlGetMultiTimePrecise @ 0x180039870
 * Callers:
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x18010EBE0 (RtlConvertHostPerfCounterToPerfCounter.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x180039A50 (RtlBeginReadTickLock.c)
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(unsigned __int64 *a1, int a2, int *a3)
{
  char v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // ebp
  int v7; // esi
  __int64 TickLock; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  int v11; // r14d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  unsigned __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+A8h] [rbp+10h]

  v22 = a2;
  v3 = 0;
  v16 = 0LL;
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
            RtlQueryPerformanceCounter(&v16);
          }
          while ( v17 != *(_QWORD *)(v5 + 24) );
        }
        while ( v14 != MEMORY[0x7FFE03B8] );
      }
      else
      {
        RtlQueryPerformanceCounter(&v16);
      }
      if ( MEMORY[0x7FFE0340] == TickLock )
        break;
      _mm_pause();
    }
    v9 = 0LL;
    v10 = v16;
    v11 = 0;
    if ( (v22 & 1) != 0 )
    {
      *a1 = v16;
      v11 = 1;
    }
    if ( v7 && v17 )
    {
      a1[1] = v10 + v17 - v18;
      v11 |= 2u;
    }
    if ( v6 )
    {
      if ( v10 > v4 )
      {
        v15 = v10 - v4 - 1;
        if ( v3 )
          v15 <<= v3;
        v9 = ((unsigned __int64)v15 * (unsigned __int128)v19) >> 64;
      }
      a1[2] = v9 + v20;
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
