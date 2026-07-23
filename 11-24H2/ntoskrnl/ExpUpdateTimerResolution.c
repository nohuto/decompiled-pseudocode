/*
 * XREFs of ExpUpdateTimerResolution @ 0x1404110E0
 * Callers:
 *     ExSetTimerResolution @ 0x140410F10 (ExSetTimerResolution.c)
 *     NtSetTimerResolution @ 0x1409A8C70 (NtSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x1409A929C (ExUpdateTimerResolutionPolicy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     ExpUpdateTimerConfiguration @ 0x14041131C (ExpUpdateTimerConfiguration.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14041141C (PoTraceSystemTimerResolutionUpdate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // r9
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rax
  __int64 result; // rax
  int v8; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = (unsigned int)a2;
  if ( a3 )
  {
    CurrentIrql = *a3;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpKernelResolutionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpKernelResolutionLock, a2, (__int64)a3, v3);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpKernelResolutionLock);
    }
    LODWORD(v3) = v10;
  }
  if ( a1 )
  {
    if ( (unsigned int)v3 >= ExpLastRequestedTime || KeMaximumIncrement <= (unsigned int)v3 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&ExpKernelResolutionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&ExpKernelResolutionLock, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return (unsigned int)KePseudoHrTimeIncrement;
    }
  }
  else
  {
    LODWORD(v3) = KeMaximumIncrement;
    v10 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount && ExpKernelRequestedTimerResolution < KeMaximumIncrement )
    {
      LODWORD(v3) = ExpKernelRequestedTimerResolution;
      v10 = ExpKernelRequestedTimerResolution;
    }
    for ( i = ExpTimerResolutionListHead; (__int64 *)i != &ExpTimerResolutionListHead; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 940) & 0x1000) != 0
        && *(_DWORD *)(i + 24) < (unsigned int)v3
        && (*(_DWORD *)(i + 92) & 0x4000000) == 0 )
      {
        LODWORD(v3) = *(_DWORD *)(i + 24);
        v10 = v3;
      }
    }
  }
  if ( (unsigned int)v3 < KeMinimumIncrement )
  {
    LODWORD(v3) = KeMinimumIncrement;
    v10 = KeMinimumIncrement;
  }
  if ( (_DWORD)v3 == ExpLastRequestedTime )
    goto LABEL_16;
  v8 = KePseudoHrTimeIncrement;
  ExpLastRequestedTime = v3;
  KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  ExpUpdateTimerConfiguration(&v10, 0LL, 0LL);
  result = v10;
  if ( v8 != v10 )
  {
    PoTraceSystemTimerResolutionUpdate();
    return v10;
  }
  return result;
}
