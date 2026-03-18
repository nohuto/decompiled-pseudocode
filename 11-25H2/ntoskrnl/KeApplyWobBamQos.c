/*
 * XREFs of KeApplyWobBamQos @ 0x140306940
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     KiWobQosResponseRequired @ 0x140432CA0 (KiWobQosResponseRequired.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeApplyWobBamQos(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  int v12; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  _KPRCB **Prcbs; // rdi
  __int64 v16; // r14
  _KPRCB *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 *v19; // r8
  int v20; // edx
  unsigned __int64 v21; // r9
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *SchedulerAssist; // r8
  int v25; // ett
  __int64 v26; // [rsp+20h] [rbp-40h] BYREF
  struct _KPRCB *v27; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+50h] [rbp-10h]
  __int16 v31; // [rsp+54h] [rbp-Ch]
  char v32; // [rsp+56h] [rbp-Ah]

  v26 = 0LL;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  v7 = *(unsigned __int8 *)(a3 + 516);
  v8 = *(unsigned __int8 *)(a2 + 516);
  v30 = -16645372;
  v31 = 5;
  v32 = 1;
  if ( (_DWORD)v7 != (_DWORD)v8 )
  {
    v9 = *((_BYTE *)&v30 + v7);
    v10 = *((_BYTE *)&v30 + v8);
    if ( v9 == 0xFF || v10 == 0xFF || v9 > v10 )
    {
      v29 = 0LL;
      CurrentPrcb = a1;
      if ( !a1 )
        CurrentPrcb = KeGetCurrentPrcb();
      KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1LL, &v26);
      *(_BYTE *)(a2 + 516) = v7;
      if ( !CurrentPrcb->NextThread )
      {
        v12 = *(_DWORD *)(a2 + 120) >> 1;
        v27 = CurrentPrcb;
        if ( (v12 & 1) != 0 )
        {
          CoreControlBlock = CurrentPrcb->CoreControlBlock;
          ProcessorCount = CoreControlBlock->ProcessorCount;
          Prcbs = CoreControlBlock->Prcbs;
          if ( !CoreControlBlock->ProcessorCount )
            goto LABEL_23;
        }
        else
        {
          Prcbs = &v27;
          ProcessorCount = 1;
        }
        v16 = ProcessorCount;
        do
        {
          v17 = *Prcbs;
          (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(a2 + 516) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
          KiUpdateThreadQosGroupingSummaries(v17);
          Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v18);
          ++Prcbs;
          --v16;
        }
        while ( v16 );
      }
LABEL_23:
      v19 = 0LL;
      v20 = 0;
      v21 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      v28 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v26 & 1) != 0 )
      {
        if ( (v26 & 1) == 1 )
        {
          v19 = (unsigned __int64 *)(*(_QWORD *)(v21 + 36440) + 8LL);
          v20 = **(unsigned __int8 **)(v21 + 36440);
        }
        if ( !v20 )
          goto LABEL_30;
      }
      else
      {
        v19 = &v28;
        v20 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v19[--v20] + 48), 0LL);
      while ( v20 );
LABEL_30:
      v26 = 0LL;
    }
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  _disable();
  result = KiWobQosResponseRequired(*(unsigned __int8 *)(a2 + 516), (unsigned __int8)a1->PrcbFlags.PrcbFlags);
  if ( (_BYTE)result )
    result = KeCheckAndApplyBamQos(a1, a2);
  v23 = KeGetCurrentPrcb();
  SchedulerAssist = v23->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v25 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v25 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)v23);
  }
  _enable();
  return result;
}
