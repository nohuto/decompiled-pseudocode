/*
 * XREFs of KeSrcuReadUnlock @ 0x1405BE300
 * Callers:
 *     KiSrcuReadUnlockIpi @ 0x1405BECC0 (KiSrcuReadUnlockIpi.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BECDC (KiSrcuReadUnlockRemote.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReadUnlockRemote @ 0x1405BECDC (KiSrcuReadUnlockRemote.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

__int64 __fastcall KeSrcuReadUnlock(__int64 a1, _DWORD *a2)
{
  bool v4; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v6; // r11
  __int64 Number; // rbx
  struct _KPRCB *v8; // rcx
  signed __int32 *v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 result; // rax
  __int64 *v13; // rbx
  int v14; // edi
  _LIST_ENTRY *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *SchedulerAssist; // r8
  int v20; // ett

  v4 = KeDisableInterrupts();
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = v4;
  Number = CurrentPrcb->Number;
  if ( Number == (unsigned __int16)*a2 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a1 + 32) + (Number << 6));
    if ( !*v13 )
      __fastfail(0xEu);
    v14 = 0;
    result = *v13 - 1;
    *v13 = result;
    if ( !result )
    {
      result = (__int64)(v13 + 1);
      v15 = (_LIST_ENTRY *)v13[1];
      if ( v15 )
      {
        if ( CurrentPrcb->RcuData.IdleState )
        {
          if ( v15 == (_LIST_ENTRY *)result )
          {
            CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = v15;
            v16 = *(_QWORD *)result;
            v17 = (_QWORD *)v13[2];
            if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v17 != result )
              __fastfail(3u);
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
          }
          *(_QWORD *)result = 0LL;
          v14 = 1;
          result = *(_QWORD *)(v13[7] + 56);
          v13[3] = result;
        }
      }
    }
    if ( v6 )
    {
      v18 = KeGetCurrentPrcb();
      SchedulerAssist = v18->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v20 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v20 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
      _enable();
    }
    if ( v14 )
    {
      result = KiSrcuReportQuiescent(v13, v13[3]);
      if ( (_DWORD)result )
        return KiSrcuFlushCompleted(a1);
    }
  }
  else
  {
    if ( v4 )
    {
      v8 = KeGetCurrentPrcb();
      v9 = (signed __int32 *)v8->SchedulerAssist;
      if ( v9 )
      {
        _m_prefetchw(v9);
        v10 = *v9;
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange(v9, v10 & 0xFFDFFFFF, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
      _enable();
    }
    return KiSrcuReadUnlockRemote(a1, a2);
  }
  return result;
}
