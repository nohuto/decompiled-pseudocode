/*
 * XREFs of RtlGetMultiTimePrecise @ 0x140491A30
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1405E4980 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     EtwpInitializeTimeStamp @ 0x1409CFBB0 (EtwpInitializeTimeStamp.c)
 *     EtwpFixBootSystemTime @ 0x140C3F178 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3F888 (EtwpInitializeBootTimeStamps.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x1402ABCF0 (RtlBeginReadTickLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HvlGetSharedPageVa @ 0x140491C00 (HvlGetSharedPageVa.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rsi
  char v6; // r13
  int v7; // r15d
  __int64 SharedPageVa; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v10; // edi
  __int64 v12; // r15
  LONGLONG v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-78h]
  unsigned __int64 v15; // [rsp+28h] [rbp-70h]
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 TickLock; // [rsp+40h] [rbp-58h]

  v3 = 0LL;
  v4 = a2;
  v15 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v14 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v7 = a2 & 4;
    SharedPageVa = HvlGetSharedPageVa();
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock((__int64 *)0xFFFFF78000000340LL);
      if ( v7 )
      {
        v15 = MEMORY[0xFFFFF78000000348];
        v16 = MEMORY[0xFFFFF78000000358];
        v6 = MEMORY[0xFFFFF78000000368];
        v17 = MEMORY[0xFFFFF78000000014];
      }
      if ( (v4 & 2) != 0 && SharedPageVa )
      {
        do
        {
          do
          {
            v5 = *(_QWORD *)(SharedPageVa + 24);
            v12 = MEMORY[0xFFFFF780000003B8];
            v14 = MEMORY[0xFFFFF780000003B8];
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          }
          while ( v5 != *(_QWORD *)(SharedPageVa + 24) );
        }
        while ( v12 != MEMORY[0xFFFFF780000003B8] );
        v7 = v4 & 4;
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      if ( MEMORY[0xFFFFF78000000340] == TickLock )
        break;
      _mm_pause();
    }
    v10 = 0;
    if ( (v4 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v10 = 1;
    }
    if ( (v4 & 2) != 0 && v5 )
    {
      a1[1].QuadPart = PerformanceCounter.QuadPart + v5 - v14;
      v10 |= 2u;
    }
    if ( (v4 & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart > v15 )
      {
        v13 = PerformanceCounter.QuadPart - v15 - 1;
        if ( v6 )
          v13 <<= v6;
        v3 = ((unsigned __int64)v13 * (unsigned __int128)v16) >> 64;
      }
      a1[2].QuadPart = v3 + v17;
      v10 |= 4u;
    }
    *a3 = v10;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
