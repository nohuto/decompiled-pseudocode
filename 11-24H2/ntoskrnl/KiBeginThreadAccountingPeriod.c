/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1402DB6B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x14048D030 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r11
  UCHAR Size; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  _QWORD *v13; // rdx
  _BYTE *SchedulerAssist; // rax
  _QWORD *SparePtr; // r8
  __int64 v16; // rbp
  __int64 v17; // r9
  unsigned int *v18; // r10
  __int64 v19; // rsi
  _QWORD *v20; // r11
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  int v23; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v25; // rcx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett

  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 35248);
    v9 = *(_QWORD *)(a1 + 35256);
    if ( v8 && v9 )
    {
      if ( *(_BYTE *)(v9 + 112) )
      {
        v10 = *(_DWORD *)(v9 + 132);
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 80);
        if ( v10 >= *(_DWORD *)(v8 + 528) )
          v10 = *(_DWORD *)(v8 + 528);
      }
    }
    else
    {
      v10 = 100;
    }
    v11 = 0LL;
    v12 = (unsigned __int16 *)(a1 + 35434);
    do
    {
      if ( v10 <= *v12 )
        break;
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 3 );
    v13 = (_QWORD *)(a1 + 8 * ((*(_BYTE *)(a1 + 35336) != 0) + 2 * v11 + 4336));
    *v13 += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0xB6) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v29 )
      {
        _m_prefetchw(v29);
        v30 = *v29;
        do
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange(v29, v30 & 0xFFDFFFFF, v30);
        }
        while ( v31 != v30 );
        if ( (v30 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      goto LABEL_30;
    }
    SparePtr = CurrentThread->WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      v16 = SparePtr[4];
      if ( v16 )
      {
        v17 = 1LL;
        if ( KiHwCountersCount )
        {
          v18 = (unsigned int *)&KiHwCounters;
          v19 = (unsigned int)KiHwCountersCount;
          v20 = SparePtr + 6;
          do
          {
            if ( (v16 & v17) != 0 )
              *v20 = __readpmc(*v18);
            v17 *= 2LL;
            v20 += 3;
            ++v18;
            --v19;
          }
          while ( v19 );
        }
      }
      if ( (SparePtr[2] & 1) != 0 )
      {
        ++*((_DWORD *)SparePtr + 5);
        *SparePtr |= 1LL << CurrentThread->WaitReason;
      }
    }
    v21 = KeGetCurrentPrcb();
    v22 = (signed __int32 *)v21->SchedulerAssist;
    if ( v22 )
    {
      _m_prefetchw(v22);
      v26 = *v22;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(v22, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    _enable();
    if ( (CurrentThread->Header.Size & 4) != 0 )
    {
      v23 = *(&CurrentThread->MiscFlags + 1);
      if ( (v23 & 0x800) == 0 )
      {
        if ( (v23 & 0x400) != 0 )
          goto LABEL_30;
        if ( CurrentThread->Priority >= 16 )
          goto LABEL_30;
        if ( (v23 & 0x200) != 0 )
          goto LABEL_30;
        SchedulingGroup = CurrentThread->SchedulingGroup;
        if ( !SchedulingGroup )
          goto LABEL_30;
        v25 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
        while ( (v25[112] & 2) == 0 )
        {
          v25 = (char *)*((_QWORD *)v25 + 52);
          if ( !v25 )
            goto LABEL_30;
        }
      }
      LOBYTE(v22) = 1;
      KiInsertDeferredPreemptionApc(a1, CurrentThread, v22);
    }
LABEL_30:
    if ( KiHgsPlusEnabled )
    {
      CurrentThread->HgsFeedbackCycles = 0LL;
      CurrentThread->HgsFeedbackStartTime = __rdtsc();
    }
    return;
  }
  if ( (Size & 2) != 0 )
    KiBeginCounterAccumulation(CurrentThread, 0LL);
}
