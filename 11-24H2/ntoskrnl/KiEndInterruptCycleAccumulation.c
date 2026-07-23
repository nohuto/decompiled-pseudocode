/*
 * XREFs of KiEndInterruptCycleAccumulation @ 0x140368D80
 * Callers:
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiBeginCounterAccumulation @ 0x14048D030 (KiBeginCounterAccumulation.c)
 */

char __fastcall KiEndInterruptCycleAccumulation(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r11
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rdx
  unsigned __int64 v11; // rdx
  LARGE_INTEGER v12; // r8
  unsigned __int128 v13; // rax
  int v14; // edx
  struct _KTHREAD *CurrentThread; // r10
  UCHAR Size; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  unsigned __int16 *v21; // rdx
  __int64 v22; // rax
  _BYTE *SchedulerAssist; // rax
  bool v25; // zf

  v3 = a1;
  if ( *(_BYTE *)(a1 + 32) != 1 )
    goto LABEL_34;
  v4 = 0LL;
  v5 = 0LL;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a1 = *(unsigned __int8 *)(v3 + 172);
    v6 = PerformanceCounter;
    v10 = PerformanceCounter;
    if ( (_BYTE)a1 )
      v10.QuadPart = PerformanceCounter.QuadPart << a1;
    v5 = ((unsigned __int64)v10.QuadPart * (unsigned __int128)*(unsigned __int64 *)(v3 + 176)) >> 64;
    v11 = *(_QWORD *)(v3 + 34552);
    v8 = v5 - *(_QWORD *)(v3 + 34432);
    v7 = PerformanceCounter.QuadPart - v11;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v12 = PerformanceCounter;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v13 = (v11 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v12.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v13 = v11 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      a1 = (unsigned int)KiMaximumIncrementShiftCount;
      v14 = ((unsigned __int64)(((((unsigned __int64)v12.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v13 + 1)
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v14 )
      {
        *(_DWORD *)(v3 + 34372) += v14;
        *(_DWORD *)(v3 + 34384) += v14;
      }
    }
  }
  *(_QWORD *)(v3 + 34560) += v7;
  *(_QWORD *)(v3 + 34680) += v8;
  *(LARGE_INTEGER *)(v3 + 34552) = v6;
  *(_QWORD *)(v3 + 34432) = v5;
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 8) + 2LL) & 0x72) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Size = CurrentThread->Header.Size;
    if ( (Size & 0x20) != 0 )
    {
      v17 = *(_QWORD *)(v3 + 35248);
      v18 = *(_QWORD *)(v3 + 35256);
      if ( v17 && v18 )
      {
        if ( *(_BYTE *)(v18 + 112) )
        {
          v19 = *(_DWORD *)(v18 + 132);
        }
        else
        {
          v19 = *(_DWORD *)(v18 + 80);
          if ( v19 >= *(_DWORD *)(v17 + 528) )
            v19 = *(_DWORD *)(v17 + 528);
        }
      }
      else
      {
        v19 = 100;
      }
      v20 = 0;
      v21 = (unsigned __int16 *)(v3 + 35434);
      do
      {
        if ( v19 <= *v21 )
          break;
        ++v20;
        ++v21;
      }
      while ( v20 < 3 );
      LOBYTE(v4) = *(_BYTE *)(v3 + 35336) != 0;
      v22 = v4 + 4336 + 2LL * v20;
      a1 = v8 + *(_QWORD *)(v3 + 8 * v22);
      *(_QWORD *)(v3 + 8 * v22) = a1;
    }
    if ( (Size & 0x40) != 0 )
    {
      SchedulerAssist = CurrentThread->SchedulerAssist;
      if ( SchedulerAssist )
        SchedulerAssist[64] = 1;
    }
    *(_BYTE *)(v3 + 32) = 0;
    if ( (Size & 2) != 0 )
      KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
  else
  {
LABEL_34:
    --*(_BYTE *)(v3 + 32);
  }
  if ( *(_BYTE *)(v3 + 32) )
    return 0;
  if ( !*(_BYTE *)(v3 + 6) )
    return 0;
  v25 = *(_BYTE *)(v3 + 7) == 0;
  *(_BYTE *)(v3 + 6) = 0;
  if ( !v25 )
    return 0;
  if ( a2 < 2u )
    return 1;
  LOBYTE(a1) = 2;
  HalRequestSoftwareInterrupt(a1);
  return 0;
}
