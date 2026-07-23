/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x140475BB0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     PpmIdleRemoveConcurrency @ 0x140475AB0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140475B30 (PpmIdleInstallConcurrency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
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
  unsigned __int64 *v17; // rax
  int v18; // ett

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
        v18 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v18 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( !a3 && !(_DWORD)v12 && v6 && a4 )
  {
    v17 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
    do
    {
      if ( v6 < *v17 )
        break;
      ++v4;
      v17 += 3;
    }
    while ( v4 < 0x24 );
    result = v4;
    _InterlockedAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v6);
  }
  return result;
}
