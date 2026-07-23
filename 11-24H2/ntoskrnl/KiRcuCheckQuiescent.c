/*
 * XREFs of KiRcuCheckQuiescent @ 0x14032DA60
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404AD758 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

void __fastcall KiRcuCheckQuiescent(__int64 a1)
{
  signed __int64 v2; // rdx
  unsigned __int64 *v3; // rcx
  __int64 v4; // rdx
  bool v5; // al
  struct _KPRCB *v6; // rcx
  signed __int32 *v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  bool v10; // al
  __int64 *v11; // rdi
  bool v12; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  bool v25; // r8
  __int64 v26; // rcx
  signed __int32 *v27; // r8
  signed __int32 v28; // ett
  __int64 **v29; // rax
  signed __int32 v30[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 32) > 1u )
    return;
  if ( *(_QWORD *)(a1 + 14584) )
  {
    v10 = KeDisableInterrupts();
    v11 = *(__int64 **)(a1 + 14584);
    v12 = v10;
    if ( !v11 )
    {
      if ( !v10 )
        goto LABEL_3;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_27;
      _m_prefetchw(SchedulerAssist);
      v15 = *SchedulerAssist;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      goto LABEL_25;
    }
    v17 = (__int64 *)*v11;
    if ( *(v11 - 1) )
    {
      if ( v11 != v17 )
        *(_QWORD *)(a1 + 14584) = v17;
    }
    else
    {
      if ( v17 == v11 )
      {
        *(_QWORD *)(a1 + 14584) = 0LL;
      }
      else
      {
        *(_QWORD *)(a1 + 14584) = v17;
        v18 = (__int64 *)*v11;
        v19 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v19 != v11 )
          goto LABEL_56;
        *v19 = v18;
        v18[1] = (__int64)v19;
      }
      v20 = v11[6];
      *v11 = 0LL;
      v11[2] = *(_QWORD *)(v20 + 56);
    }
    if ( v12 )
    {
      v21 = KeGetCurrentPrcb();
      v22 = (signed __int32 *)v21->SchedulerAssist;
      if ( v22 )
      {
        _m_prefetchw(v22);
        v23 = *v22;
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange(v22, v23 & 0xFFDFFFFF, v23);
        }
        while ( v24 != v23 );
        if ( (v23 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
      _enable();
    }
    if ( v11[2] == v11[3] )
      goto LABEL_3;
    if ( (*(_QWORD *)v11[5] & *(_QWORD *)(v11[4] + 40)) == 0LL )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(v11 - 1, v11[2]) )
        KiSrcuFlushCompleted(v11[6]);
      goto LABEL_3;
    }
    v25 = KeDisableInterrupts();
    if ( *v11 )
      goto LABEL_49;
    v26 = *(_QWORD *)(a1 + 14584);
    if ( !v26 )
    {
      v11[1] = (__int64)v11;
      *v11 = (__int64)v11;
      *(_QWORD *)(a1 + 14584) = v11;
LABEL_49:
      if ( !v25 )
        goto LABEL_3;
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( !v27 )
      {
LABEL_27:
        _enable();
        goto LABEL_3;
      }
      _m_prefetchw(v27);
      v15 = *v27;
      do
      {
        v28 = v15;
        v15 = _InterlockedCompareExchange(v27, v15 & 0xFFDFFFFF, v15);
      }
      while ( v28 != v15 );
LABEL_25:
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      goto LABEL_27;
    }
    v29 = *(__int64 ***)(v26 + 8);
    if ( *v29 == (__int64 *)v26 )
    {
      *v11 = v26;
      v11[1] = (__int64)v29;
      *v29 = v11;
      *(_QWORD *)(v26 + 8) = v11;
      goto LABEL_49;
    }
LABEL_56:
    __fastfail(3u);
  }
LABEL_3:
  if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
  {
    v5 = KeDisableInterrupts();
    if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
    {
      *(_BYTE *)(a1 + 14565) = 0;
      _InterlockedOr(v30, 0);
      *(_QWORD *)(a1 + 14568) = qword_140F205C8;
    }
    if ( v5 )
    {
      v6 = KeGetCurrentPrcb();
      v7 = (signed __int32 *)v6->SchedulerAssist;
      if ( v7 )
      {
        _m_prefetchw(v7);
        v8 = *v7;
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange(v7, v8 & 0xFFDFFFFF, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
      _enable();
    }
  }
  v2 = *(_QWORD *)(a1 + 14568);
  if ( v2 != *(_QWORD *)(a1 + 14576) )
  {
    v3 = (unsigned __int64 *)((char *)&KiRcuData + 32 * *(unsigned int *)(a1 + 36));
    if ( (*(_QWORD *)(v3[1] + 56) & *v3) == 0 )
    {
      if ( (unsigned int)KiRcuReportQuiescentState(v3, v2) )
        KiRcuFlushCompleted(*(unsigned __int8 *)(a1 + 14566), v4);
    }
  }
}
