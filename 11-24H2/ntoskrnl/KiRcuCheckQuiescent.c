/*
 * XREFs of KiRcuCheckQuiescent @ 0x140206480
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B2F48 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 */

void __fastcall KiRcuCheckQuiescent(__int64 a1)
{
  _QWORD *v2; // rcx
  char v3; // al
  signed __int32 *v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // al
  __int64 *v8; // rdi
  char v9; // r8
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rax
  signed __int32 *v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  char v20; // r8
  __int64 v21; // rcx
  signed __int32 *v22; // r8
  signed __int32 v23; // ett
  __int64 **v24; // rax
  signed __int32 v25[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 32) > 1u )
    return;
  if ( *(_QWORD *)(a1 + 14584) )
  {
    v7 = KeDisableInterrupts();
    v8 = *(__int64 **)(a1 + 14584);
    v9 = v7;
    if ( !v8 )
    {
      if ( !v7 )
        goto LABEL_3;
      SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_27;
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      goto LABEL_25;
    }
    v13 = (__int64 *)*v8;
    if ( *(v8 - 1) )
    {
      if ( v8 != v13 )
        *(_QWORD *)(a1 + 14584) = v13;
    }
    else
    {
      if ( v13 == v8 )
      {
        *(_QWORD *)(a1 + 14584) = 0LL;
      }
      else
      {
        *(_QWORD *)(a1 + 14584) = v13;
        v14 = (__int64 *)*v8;
        v15 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v15 != v8 )
          goto LABEL_56;
        *v15 = v14;
        v14[1] = (__int64)v15;
      }
      v16 = v8[6];
      *v8 = 0LL;
      v8[2] = *(_QWORD *)(v16 + 56);
    }
    if ( v9 )
    {
      v17 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( v17 )
      {
        _m_prefetchw(v17);
        v18 = *v17;
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(v17, v18 & 0xFFDFFFFF, v18);
        }
        while ( v19 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick();
      }
      _enable();
    }
    if ( v8[2] == v8[3] )
      goto LABEL_3;
    if ( (*(_QWORD *)v8[5] & *(_QWORD *)(v8[4] + 40)) == 0LL )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(v8 - 1, v8[2]) )
        KiSrcuFlushCompleted(v8[6]);
      goto LABEL_3;
    }
    v20 = KeDisableInterrupts();
    if ( *v8 )
      goto LABEL_49;
    v21 = *(_QWORD *)(a1 + 14584);
    if ( !v21 )
    {
      v8[1] = (__int64)v8;
      *v8 = (__int64)v8;
      *(_QWORD *)(a1 + 14584) = v8;
LABEL_49:
      if ( !v20 )
        goto LABEL_3;
      v22 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( !v22 )
      {
LABEL_27:
        _enable();
        goto LABEL_3;
      }
      _m_prefetchw(v22);
      v11 = *v22;
      do
      {
        v23 = v11;
        v11 = _InterlockedCompareExchange(v22, v11 & 0xFFDFFFFF, v11);
      }
      while ( v23 != v11 );
LABEL_25:
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
      goto LABEL_27;
    }
    v24 = *(__int64 ***)(v21 + 8);
    if ( *v24 == (__int64 *)v21 )
    {
      *v8 = v21;
      v8[1] = (__int64)v24;
      *v24 = v8;
      *(_QWORD *)(v21 + 8) = v8;
      goto LABEL_49;
    }
LABEL_56:
    __fastfail(3u);
  }
LABEL_3:
  if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
  {
    v3 = KeDisableInterrupts();
    if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
    {
      *(_BYTE *)(a1 + 14565) = 0;
      _InterlockedOr(v25, 0);
      *(_QWORD *)(a1 + 14568) = qword_140F20C48;
    }
    if ( v3 )
    {
      v4 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( v4 )
      {
        _m_prefetchw(v4);
        v5 = *v4;
        do
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange(v4, v5 & 0xFFDFFFFF, v5);
        }
        while ( v6 != v5 );
        if ( (v5 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick();
      }
      _enable();
    }
  }
  if ( *(_QWORD *)(a1 + 14568) != *(_QWORD *)(a1 + 14576) )
  {
    v2 = (_QWORD *)((char *)&KiRcuData + 32 * *(unsigned int *)(a1 + 36));
    if ( (*(_QWORD *)(v2[1] + 56LL) & *v2) == 0LL )
    {
      if ( (unsigned int)KiRcuReportQuiescentState() )
        KiRcuFlushCompleted(*(unsigned __int8 *)(a1 + 14566));
    }
  }
}
