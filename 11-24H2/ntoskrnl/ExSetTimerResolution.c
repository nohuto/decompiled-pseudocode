/*
 * XREFs of ExSetTimerResolution @ 0x14041D420
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x1405E4BB8 (PspReadDfssConfigurationValues.c)
 *     DifExSetTimerResolutionWrapper @ 0x1406210D0 (DifExSetTimerResolutionWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x14041D4F0 (ExpUpdateTimerResolution.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  ULONG v6; // edi
  __int64 v7; // rdx
  bool v9; // zf
  KIRQL v10; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053LL, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v6 = KeNonHrTimeIncrement;
  v7 = 0LL;
  v10 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      KeNonHrTimeIncrement = DesiredTime;
      v7 = DesiredTime;
LABEL_9:
      ExpKernelRequestedTimerResolution = v7;
      LOBYTE(v5) = SetResolution;
      return ExpUpdateTimerResolution(v5, v7, &v10);
    }
  }
  else if ( ExpKernelResolutionCount )
  {
    v9 = ExpKernelResolutionCount == 1;
    v5 = (unsigned int)--ExpKernelResolutionCount;
    if ( v9 )
    {
      KeNonHrTimeIncrement = KeMaximumIncrement;
      goto LABEL_9;
    }
  }
  KeReleaseSpinLock(&ExpKernelResolutionLock, v4);
  return v6;
}
