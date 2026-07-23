/*
 * XREFs of KiEndDebugAccumulation @ 0x1404F2520
 * Callers:
 *     KeThawExecution @ 0x1404F23F0 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiAccumulateTicksFromCycles @ 0x1403D1D50 (KiAccumulateTicksFromCycles.c)
 *     KiAccumulateProcessorCycleStats @ 0x1403E6C50 (KiAccumulateProcessorCycleStats.c)
 *     KiBeginCounterAccumulation @ 0x14048D030 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  char v3; // cl
  LARGE_INTEGER v4; // rdi
  LARGE_INTEGER v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 32) && *(_BYTE *)(a1 + 34524) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = *(_BYTE *)(a1 + 172);
    v4 = PerformanceCounter;
    v5 = PerformanceCounter;
    if ( v3 )
      v5.QuadPart = PerformanceCounter.QuadPart << v3;
    v6 = *(_QWORD *)(a1 + 34552);
    v7 = PerformanceCounter.QuadPart - v6;
    v8 = (((unsigned __int64)v5.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64)
       - *(_QWORD *)(a1 + 34432);
    v9 = ((unsigned __int64)v5.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      LODWORD(v12) = 3;
      KiAccumulateTicksFromCycles(a1, 0LL, v6, PerformanceCounter.LowPart, v12);
    }
    v10 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 34560) += v7;
    *(_QWORD *)(a1 + 34680) += v8;
    if ( (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
      KiAccumulateProcessorCycleStats(a1, v8);
    *(LARGE_INTEGER *)(a1 + 34552) = v4;
    *(_QWORD *)(a1 + 34432) = v9;
    v11 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v11, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
