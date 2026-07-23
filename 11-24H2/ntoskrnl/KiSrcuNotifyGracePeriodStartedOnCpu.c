/*
 * XREFs of KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405BE948
 * Callers:
 *     KiSrcuProcessorInitialize @ 0x1404F6B18 (KiSrcuProcessorInitialize.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405BEA90 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSrcuCheckQuiescent @ 0x14042A2E0 (KiSrcuCheckQuiescent.c)
 */

void __fastcall KiSrcuNotifyGracePeriodStartedOnCpu(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _QWORD *v4; // r8
  bool v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)*(unsigned int *)(a2 + 36) << 6) + 8) )
  {
    v3 = 0;
    v5 = KeDisableInterrupts();
    if ( !*v4 )
    {
      v6 = *(_QWORD *)(a2 + 14584);
      if ( v6 )
      {
        v7 = *(_QWORD **)(v6 + 8);
        if ( *v7 != v6 )
          __fastfail(3u);
        *v4 = v6;
        v4[1] = v7;
        *v7 = v4;
        *(_QWORD *)(v6 + 8) = v4;
      }
      else
      {
        v4[1] = v4;
        *v4 = v4;
        *(_QWORD *)(a2 + 14584) = v4;
      }
      if ( *(_BYTE *)(a2 + 14567) )
        v3 = 1;
    }
    if ( v5 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v10 = *SchedulerAssist;
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    if ( v3 )
      KiSrcuCheckQuiescent(a2);
  }
}
