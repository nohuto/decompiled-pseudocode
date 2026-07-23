/*
 * XREFs of ExpUpdateTimerResolution @ 0x140276C80
 * Callers:
 *     ExSetTimerResolution @ 0x140494CB0 (ExSetTimerResolution.c)
 *     NtSetTimerResolution @ 0x1409CC680 (NtSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x1409CCCAC (ExUpdateTimerResolutionPolicy.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140276BA8 (PoTraceSystemTimerResolutionUpdate.c)
 *     ExpUpdateTimerConfiguration @ 0x1402772AC (ExpUpdateTimerConfiguration.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned int v3; // r9d
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rax
  __int64 result; // rax
  int v8; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = a2;
  if ( a3 )
  {
    CurrentIrql = *a3;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpKernelResolutionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpKernelResolutionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpKernelResolutionLock);
    }
    v3 = v10;
  }
  if ( a1 )
  {
    if ( v3 >= ExpLastRequestedTime || KeMaximumIncrement <= v3 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&ExpKernelResolutionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      return (unsigned int)KePseudoHrTimeIncrement;
    }
  }
  else
  {
    v3 = KeMaximumIncrement;
    v10 = KeMaximumIncrement;
    if ( ExpKernelResolutionCount && ExpKernelRequestedTimerResolution < KeMaximumIncrement )
    {
      v3 = ExpKernelRequestedTimerResolution;
      v10 = ExpKernelRequestedTimerResolution;
    }
    for ( i = ExpTimerResolutionListHead; (__int64 *)i != &ExpTimerResolutionListHead; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i - 940) & 0x1000) != 0 && *(_DWORD *)(i + 24) < v3 && (*(_DWORD *)(i + 92) & 0x4000000) == 0 )
      {
        v3 = *(_DWORD *)(i + 24);
        v10 = v3;
      }
    }
  }
  if ( v3 < KeMinimumIncrement )
  {
    v3 = KeMinimumIncrement;
    v10 = KeMinimumIncrement;
  }
  if ( v3 == ExpLastRequestedTime )
    goto LABEL_16;
  v8 = KePseudoHrTimeIncrement;
  ExpLastRequestedTime = v3;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
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
