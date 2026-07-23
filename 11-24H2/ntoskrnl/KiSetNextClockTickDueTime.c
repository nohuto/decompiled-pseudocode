/*
 * XREFs of KiSetNextClockTickDueTime @ 0x140317B60
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x1402AD48C (KeUpdatePendingQosRequest.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KiRestoreClockTickRate @ 0x140434EB0 (KiRestoreClockTickRate.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140462E90 (KiCancelClockTimer.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     KiGetClockTimerEarliestDeadline @ 0x140317F70 (KiGetClockTimerEarliestDeadline.c)
 *     KiSetClockTickRate @ 0x140318120 (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(LARGE_INTEGER InterruptTimePrecise, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _KCLOCK_TIMER_DEADLINE_TYPE ClockTimerEarliestDeadline; // eax
  unsigned int v6; // ebx
  _KCLOCK_TIMER_DEADLINE_TYPE v7; // r9d
  __int64 TolerableDelay; // rdx
  unsigned __int64 DueTime; // r8
  bool v10; // cf
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int64 Min; // rcx
  unsigned int v14; // r10d
  unsigned __int8 v15; // r12
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int TimeIncrement; // r14d
  unsigned __int8 v20; // dl
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *v24; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  unsigned __int8 ClockOwner; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v29; // [rsp+41h] [rbp-BFh] BYREF
  char v30; // [rsp+42h] [rbp-BEh] BYREF
  unsigned __int8 v31; // [rsp+43h] [rbp-BDh]
  unsigned __int8 v32; // [rsp+44h] [rbp-BCh] BYREF
  bool v33; // [rsp+45h] [rbp-BBh]
  _KCLOCK_TIMER_DEADLINE_TYPE v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+4Ch] [rbp-B4h]
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-ACh] BYREF
  _KCLOCK_TIMER_DEADLINE_TYPE v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER v43; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-58h] BYREF
  int *v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *p_ClockOwner; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  unsigned int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  unsigned int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  char *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  _KCLOCK_TIMER_DEADLINE_TYPE *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  unsigned int *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  LONGLONG *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  char *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v31 = a2;
  v33 = KeDisableInterrupts();
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  ClockTimerEarliestDeadline = (unsigned int)KiGetClockTimerEarliestDeadline(CurrentPrcb, a2);
  v6 = KeMinimumIncrement;
  v7 = ClockTimerEarliestDeadline;
  v34 = ClockTimerEarliestDeadline;
  TolerableDelay = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].TolerableDelay;
  DueTime = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].DueTime;
  v10 = (unsigned int)TolerableDelay < KeMinimumIncrement;
  v11 = DueTime + TolerableDelay;
  v12 = DueTime + TolerableDelay;
  if ( !v10 )
    v12 -= (unsigned int)KeMinimumIncrement;
  if ( v12 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    v6 = ((int)v12 - InterruptTimePrecise.LowPart + KeMinimumIncrement - 1) / KeMinimumIncrement * KeMinimumIncrement;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v15 = 1;
  v35 = *(_DWORD *)(Min + 28);
  v14 = v35;
  v16 = InterruptTimePrecise.QuadPart + v35;
  v17 = InterruptTimePrecise.QuadPart + (unsigned int)KeQuantumEndTimerIncrement;
  v42 = v17;
  if ( v16 <= v11 && DueTime <= v16 )
  {
    v6 = v35;
LABEL_26:
    v15 = 0;
    goto LABEL_11;
  }
  if ( DueTime <= v17 && v17 <= v11 )
  {
    v6 = KeQuantumEndTimerIncrement;
    goto LABEL_26;
  }
LABEL_11:
  LOBYTE(DueTime) = 0;
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (v6 == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement || v6 == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    v18 = KiSetClockTickRate(v6, v15, DueTime);
    v17 = v42;
    TimeIncrement = v18;
    v7 = v34;
    LOBYTE(DueTime) = 1;
    v14 = v35;
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = v7;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise.QuadPart + TimeIncrement;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v44 = v11;
    v53 = &v43;
    ClockOwner = CurrentPrcb->ClockOwner;
    p_ClockOwner = &ClockOwner;
    v57 = &v36;
    v59 = &v37;
    v61 = &v29;
    v63 = &v30;
    v65 = &v38;
    v67 = &v39;
    v69 = &v44;
    v71 = &v45;
    v73 = &v46;
    v75 = (LONGLONG *)&v47;
    v32 = v31;
    v77 = (char *)&v32;
    v30 = DueTime;
    v38 = v7;
    v46 = v17;
    v43 = InterruptTimePrecise;
    v54 = 8LL;
    v56 = 1LL;
    v36 = v6;
    v58 = 4LL;
    v37 = TimeIncrement;
    v60 = 4LL;
    v29 = v15;
    v62 = 1LL;
    v64 = 1LL;
    v66 = 4LL;
    v39 = v14;
    v68 = 4LL;
    v70 = 8LL;
    v45 = v16;
    v72 = 8LL;
    v74 = 8LL;
    v47 = v11 - InterruptTimePrecise.QuadPart;
    v76 = 8LL;
    v78 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07080,
      (unsigned __int8 *)&byte_140047D6F,
      0LL,
      0LL,
      0xFu,
      &v52);
  }
  if ( v15 )
  {
    v41 = 1397707336;
    v40 = TimeIncrement;
    if ( PopDiagHandleRegistered )
    {
      if ( PopDiagHandle
        && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 0x4000000000000004LL)
         || *(_WORD *)(v22 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v22 + 40) + 96LL, v20, v21)) )
      {
        UserData.Ptr = (ULONGLONG)&v40;
        *(_QWORD *)&UserData.Size = 4LL;
        v50 = &v41;
        v51 = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_KERNEL_STRS_INTERNAL, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
  }
  if ( v33 )
  {
    v24 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v24->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
    _enable();
  }
  return TimeIncrement;
}
