/*
 * XREFs of PpmIdleTransitionStall @ 0x1405CC3CC
 * Callers:
 *     PpmExitCoordinatedIdleState @ 0x1404A3E14 (PpmExitCoordinatedIdleState.c)
 *     PoInitiateProcessorWake @ 0x1405CB300 (PoInitiateProcessorWake.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CB75C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405CC628 (PpmIdleWaitForDependentTransitions.c)
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LARGE_INTEGER __fastcall PpmIdleTransitionStall(__int64 a1)
{
  LARGE_INTEGER result; // rax
  ULONG_PTR v3; // r9

  if ( *(_QWORD *)a1 )
  {
    result.QuadPart = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
    *(_DWORD *)(a1 + 24) = result.LowPart;
    if ( result.LowPart == 1000 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      result = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)a1);
      if ( result.QuadPart > *(_QWORD *)(a1 + 8) )
      {
        v3 = *(_QWORD *)(a1 + 16);
        if ( v3 )
          KeBugCheckEx(0xA0u, 0x701uLL, *(unsigned int *)(v3 + 34944), v3, *(unsigned int *)(v3 + 36));
        KeBugCheckEx(0xA0u, 0x704uLL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    result = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)a1 = result;
  }
  if ( *(_BYTE *)(a1 + 28) )
    _mm_pause();
  _mm_pause();
  return result;
}
