/*
 * XREFs of KiRebaselineProcessorStartCycles @ 0x1405AE00C
 * Callers:
 *     KiInitializeProcessorCycleAccumulation @ 0x1405ADF34 (KiInitializeProcessorCycleAccumulation.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiRebaselineProcessorStartCycles(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  char v3; // cl
  LARGE_INTEGER v4; // r8
  LARGE_INTEGER v5; // rdx
  unsigned __int128 v6; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = *(_BYTE *)(a1 + 172);
  v4 = PerformanceCounter;
  v5 = PerformanceCounter;
  if ( v3 )
    v5.QuadPart = PerformanceCounter.QuadPart << v3;
  v6 = (unsigned __int64)v5.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
  *(LARGE_INTEGER *)(a1 + 34552) = v4;
  *(_QWORD *)(a1 + 34432) = *((_QWORD *)&v6 + 1);
  return v6;
}
