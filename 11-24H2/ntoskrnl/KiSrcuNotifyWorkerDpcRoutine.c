/*
 * XREFs of KiSrcuNotifyWorkerDpcRoutine @ 0x1405BEA90
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405BE948 (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BEB94 (KiSrcuNotifyWorkerSelectAndQueue.c)
 */

__int64 __fastcall KiSrcuNotifyWorkerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r8
  bool v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedAnd((volatile signed __int32 *)(a3 + 68), ~(1 << (LOBYTE(CurrentPrcb->Number) - *(_BYTE *)(a3 + 64))));
  if ( a4 )
  {
    v8 = KeDisableInterrupts();
    if ( *(_QWORD *)(v9 + 14584) )
    {
      v11 = (_QWORD *)(*(_QWORD *)(v10 + 32) + (v7 << 6));
      v12 = v11 + 1;
      v13 = v11[1];
      if ( v13 )
      {
        if ( *v11 )
          __fastfail(0xEu);
        if ( (_QWORD *)v13 == v12 )
        {
          *(_QWORD *)(v9 + 14584) = 0LL;
        }
        else
        {
          v14 = (_QWORD *)v11[2];
          if ( *(_QWORD **)(v13 + 8) != v12 || (_QWORD *)*v14 != v12 )
            __fastfail(3u);
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
        }
        *v12 = 0LL;
      }
    }
    if ( v8 )
    {
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      _enable();
    }
  }
  else
  {
    KiSrcuNotifyGracePeriodStartedOnCpu(a2, (__int64)CurrentPrcb);
  }
  return KiSrcuNotifyWorkerSelectAndQueue((PVOID)a3, a4);
}
