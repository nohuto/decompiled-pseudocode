/*
 * XREFs of ExSetTimerResolution @ 0x140494CB0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x1405D8C1C (PspReadDfssConfigurationValues.c)
 *     DifExSetTimerResolutionWrapper @ 0x140615110 (DifExSetTimerResolutionWrapper.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  unsigned __int8 v4; // al
  ULONG v5; // edi
  ULONG v6; // edx
  int v7; // ecx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeNonHrTimeIncrement;
  v6 = 0;
  v9 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      KeNonHrTimeIncrement = DesiredTime;
      v6 = DesiredTime;
LABEL_9:
      ExpKernelRequestedTimerResolution = v6;
      return ExpUpdateTimerResolution(SetResolution, v6, &v9);
    }
  }
  else
  {
    v7 = ExpKernelResolutionCount;
    if ( ExpKernelResolutionCount )
    {
      --ExpKernelResolutionCount;
      if ( v7 == 1 )
      {
        KeNonHrTimeIncrement = KeMaximumIncrement;
        goto LABEL_9;
      }
    }
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, v4);
  return v5;
}
