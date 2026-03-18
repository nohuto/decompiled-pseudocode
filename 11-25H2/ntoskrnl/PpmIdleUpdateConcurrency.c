/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x140479680
 * Callers:
 *     PpmIdleRemoveConcurrency @ 0x140479580 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140479600 (PpmIdleInstallConcurrency.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

__int64 __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  bool v10; // r13
  KSPIN_LOCK v11; // rcx
  __int64 v12; // rbp
  int v13; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v17; // ett
  unsigned __int64 *v18; // rax

  v4 = 0;
  v6 = 0LL;
  v10 = KeDisableInterrupts();
  KxAcquireSpinLock(SpinLock);
  v11 = SpinLock[2];
  v12 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v11 )
  {
    SpinLock[2] = a2;
    v6 = a2 - v11;
    if ( a4 )
    {
      SpinLock[3] += v6;
      SpinLock[v12 + 41] += v6;
    }
  }
  v13 = v12 + 1;
  if ( a3 )
    v13 = v12 - 1;
  *((_DWORD *)SpinLock + 3) = v13;
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v17 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v17 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( !a3 && !(_DWORD)v12 && v6 && a4 )
  {
    v18 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
    do
    {
      if ( v6 < *v18 )
        break;
      ++v4;
      v18 += 3;
    }
    while ( v4 < 0x24 );
    result = v4;
    _InterlockedAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v6);
  }
  return result;
}
