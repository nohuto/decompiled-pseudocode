/*
 * XREFs of KiSrcuCheckQuiescent @ 0x14042A2E0
 * Callers:
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405BE948 (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

void __fastcall KiSrcuCheckQuiescent(__int64 a1)
{
  bool v2; // al
  __int64 *v3; // rdi
  bool v4; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  bool v17; // r8
  __int64 v18; // rcx
  struct _KPRCB *v19; // rcx
  signed __int32 *v20; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 **v23; // rax

  if ( !*(_QWORD *)(a1 + 14584) )
    return;
  v2 = KeDisableInterrupts();
  v3 = *(__int64 **)(a1 + 14584);
  v4 = v2;
  if ( !v3 )
  {
    if ( !v2 )
      return;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    goto LABEL_9;
  }
  v9 = (__int64 *)*v3;
  if ( *(v3 - 1) )
  {
    if ( v3 != v9 )
      *(_QWORD *)(a1 + 14584) = v9;
  }
  else
  {
    if ( v9 == v3 )
    {
      *(_QWORD *)(a1 + 14584) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 14584) = v9;
      v10 = (__int64 *)*v3;
      v11 = (__int64 **)v3[1];
      if ( *(__int64 **)(*v3 + 8) != v3 || *v11 != v3 )
        goto LABEL_40;
      *v11 = v10;
      v10[1] = (__int64)v11;
    }
    v12 = v3[6];
    *v3 = 0LL;
    v3[2] = *(_QWORD *)(v12 + 56);
  }
  if ( v4 )
  {
    v13 = KeGetCurrentPrcb();
    v14 = (signed __int32 *)v13->SchedulerAssist;
    if ( v14 )
    {
      _m_prefetchw(v14);
      v15 = *v14;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v14, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    _enable();
  }
  if ( v3[2] == v3[3] )
    return;
  if ( (*(_QWORD *)v3[5] & *(_QWORD *)(v3[4] + 40)) == 0LL )
  {
    if ( (unsigned int)KiSrcuReportQuiescent(v3 - 1, v3[2]) )
      KiSrcuFlushCompleted(v3[6]);
    return;
  }
  v17 = KeDisableInterrupts();
  if ( !*v3 )
  {
    v18 = *(_QWORD *)(a1 + 14584);
    if ( !v18 )
    {
      v3[1] = (__int64)v3;
      *v3 = (__int64)v3;
      *(_QWORD *)(a1 + 14584) = v3;
      goto LABEL_31;
    }
    v23 = *(__int64 ***)(v18 + 8);
    if ( *v23 == (__int64 *)v18 )
    {
      *v3 = v18;
      v3[1] = (__int64)v23;
      *v23 = v3;
      *(_QWORD *)(v18 + 8) = v3;
      goto LABEL_31;
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_31:
  if ( v17 )
  {
    v19 = KeGetCurrentPrcb();
    v20 = (signed __int32 *)v19->SchedulerAssist;
    if ( v20 )
    {
      _m_prefetchw(v20);
      v21 = *v20;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(v20, v21 & 0xFFDFFFFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
LABEL_9:
    _enable();
  }
}
