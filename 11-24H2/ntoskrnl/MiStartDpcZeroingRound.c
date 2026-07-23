/*
 * XREFs of MiStartDpcZeroingRound @ 0x140694B0C
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406947C4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 */

__int64 __fastcall MiStartDpcZeroingRound(LARGE_INTEGER *a1)
{
  unsigned int v2; // ebx
  BOOL v3; // eax
  unsigned int v4; // esi
  LARGE_INTEGER v5; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[24].LowPart + 1;
  v3 = MiInitializeZeroEngineCurrentPassDpcAffinity((__int64)a1, v2);
  PerformanceFrequency.QuadPart = 0LL;
  v4 = v3;
  a1[37].QuadPart = (a1[35].QuadPart / (unsigned __int64)v2) & 0xFFFFFFFFFFFFF000uLL;
  a1[16].LowPart = v2;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v5.QuadPart = 10000000 * v5.QuadPart / PerformanceFrequency.QuadPart;
  a1[2] = v5;
  _InterlockedOr(v7, 0);
  return v4;
}
