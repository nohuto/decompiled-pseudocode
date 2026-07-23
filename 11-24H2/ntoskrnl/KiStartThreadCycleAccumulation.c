/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x14036D230
 * Callers:
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiResumeThreadCycleAccumulation @ 0x1402DBC80 (KiResumeThreadCycleAccumulation.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

void __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // r11
  LARGE_INTEGER PerformanceCounter; // rax
  char v12; // cl
  LARGE_INTEGER v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned __int16 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned int *v24; // r10
  __int64 v25; // rdi
  _QWORD *v26; // r11
  bool v27; // zf
  LARGE_INTEGER v28; // r8
  unsigned __int128 v29; // rax
  int v30; // edx

  v6 = 0LL;
  v7.QuadPart = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = *(_BYTE *)(a1 + 172);
    v7 = PerformanceCounter;
    v13 = PerformanceCounter;
    if ( v12 )
      v13.QuadPart = PerformanceCounter.QuadPart << v12;
    v8 = ((unsigned __int64)v13.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    v14 = *(_QWORD *)(a1 + 34552);
    v10 = v8 - *(_QWORD *)(a1 + 34432);
    v9 = PerformanceCounter.QuadPart - v14;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v28 = PerformanceCounter;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v29 = (v14 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v28.QuadPart = v7.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v29 = v14 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v30 = ((unsigned __int64)(((((unsigned __int64)v28.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v29 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v30 )
      {
        if ( a3 != 0 )
        {
          *(_DWORD *)(a1 + 34372) += v30;
          *(_DWORD *)(a1 + 34380) += v30;
        }
        else if ( !a3 || -(a3 != 0) == 1 )
        {
          *(_DWORD *)(a1 + 34372) += v30;
          *(_DWORD *)(a1 + 34384) += v30;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 34560) += v9;
  *(_QWORD *)(a1 + 34680) += v10;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 35248);
    v16 = *(_QWORD *)(a1 + 35256);
    if ( v15 && v16 )
    {
      if ( *(_BYTE *)(v16 + 112) )
      {
        v17 = *(_DWORD *)(v16 + 132);
      }
      else
      {
        v17 = *(_DWORD *)(v16 + 80);
        if ( v17 >= *(_DWORD *)(v15 + 528) )
          v17 = *(_DWORD *)(v15 + 528);
      }
    }
    else
    {
      v17 = 100;
    }
    v18 = 0;
    v19 = (unsigned __int16 *)(a1 + 35434);
    do
    {
      if ( v17 <= *v19 )
        break;
      ++v18;
      ++v19;
    }
    while ( v18 < 3 );
    LOBYTE(v6) = *(_BYTE *)(a1 + 35336) != 0;
    *(_QWORD *)(a1 + 8 * (v6 + 4336 + 2LL * v18)) += v10;
  }
  if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
  {
    v20 = *(_QWORD *)(a2 + 968);
    if ( v20 )
      *(_BYTE *)(v20 + 64) = 1;
  }
  *(LARGE_INTEGER *)(a1 + 34552) = v7;
  *(_QWORD *)(a1 + 34432) = v8;
  if ( (*(_BYTE *)(a2 + 2) & 2) != 0 )
  {
    v21 = *(_QWORD *)(a2 + 360);
    v22 = *(_QWORD *)(v21 + 32);
    if ( v22 )
    {
      v23 = 1LL;
      if ( KiHwCountersCount )
      {
        v24 = (unsigned int *)&KiHwCounters;
        v25 = (unsigned int)KiHwCountersCount;
        v26 = (_QWORD *)(v21 + 48);
        do
        {
          if ( (v22 & v23) != 0 )
            *v26 = __readpmc(*v24);
          v23 *= 2LL;
          v26 += 3;
          ++v24;
          --v25;
        }
        while ( v25 );
      }
    }
  }
  v27 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v27 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !a3 )
      HalRequestSoftwareInterrupt(2);
  }
}
