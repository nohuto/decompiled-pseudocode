/*
 * XREFs of KiSetNextClockTickDueTime @ 0x1402A01F0
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KiCancelClockTimer @ 0x140469F60 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetClockTimerEarliestDeadline @ 0x1402A0600 (KiGetClockTimerEarliestDeadline.c)
 *     KiSetClockTickRate @ 0x1402A07B0 (KiSetClockTickRate.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 v4; // bl
  __int64 InterruptTimePrecise; // rsi
  _KCLOCK_TIMER_DEADLINE_TYPE ClockTimerEarliestDeadline; // eax
  unsigned int v7; // ebx
  _KCLOCK_TIMER_DEADLINE_TYPE v8; // r9d
  __int64 TolerableDelay; // rdx
  unsigned __int64 DueTime; // r8
  bool v11; // cf
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r10d
  unsigned __int8 v16; // r12
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int TimeIncrement; // r14d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *v25; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int8 ClockOwner; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v30; // [rsp+41h] [rbp-BFh] BYREF
  char v31; // [rsp+42h] [rbp-BEh] BYREF
  char v32; // [rsp+43h] [rbp-BDh]
  char v33; // [rsp+44h] [rbp-BCh] BYREF
  char v34; // [rsp+45h] [rbp-BBh]
  _KCLOCK_TIMER_DEADLINE_TYPE v35; // [rsp+48h] [rbp-B8h]
  unsigned int v36; // [rsp+4Ch] [rbp-B4h]
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  _KCLOCK_TIMER_DEADLINE_TYPE v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  char v49[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-58h] BYREF
  int *v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  char v53[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *p_ClockOwner; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  unsigned int *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  unsigned int *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  char *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  _KCLOCK_TIMER_DEADLINE_TYPE *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  unsigned int *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  char *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v32 = a2;
  InterruptTimePrecise = a1;
  v34 = KeDisableInterrupts(a1, a2, a3);
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v49);
  ClockTimerEarliestDeadline = (unsigned int)KiGetClockTimerEarliestDeadline(CurrentPrcb, v4);
  v7 = KeMinimumIncrement;
  v8 = ClockTimerEarliestDeadline;
  v35 = ClockTimerEarliestDeadline;
  TolerableDelay = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].TolerableDelay;
  DueTime = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].DueTime;
  v11 = (unsigned int)TolerableDelay < KeMinimumIncrement;
  v12 = DueTime + TolerableDelay;
  v13 = DueTime + TolerableDelay;
  if ( !v11 )
    v13 -= (unsigned int)KeMinimumIncrement;
  if ( v13 > InterruptTimePrecise + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    v7 = ((int)v13 - (int)InterruptTimePrecise + KeMinimumIncrement - 1)
       / (unsigned int)KeMinimumIncrement
       * KeMinimumIncrement;
  if ( (qword_140E66758 & 1) != 0 )
  {
    if ( qword_140E66758 == 1 )
      v14 = 0LL;
    else
      v14 = qword_140E66758 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v14 = qword_140E66758;
  }
  v16 = 1;
  v36 = *(_DWORD *)(v14 + 28);
  v15 = v36;
  v17 = InterruptTimePrecise + v36;
  v18 = InterruptTimePrecise + (unsigned int)KeQuantumEndTimerIncrement;
  v43 = v18;
  if ( v17 <= v12 && DueTime <= v17 )
  {
    v7 = v36;
LABEL_26:
    v16 = 0;
    goto LABEL_11;
  }
  if ( DueTime <= v18 && v18 <= v12 )
  {
    v7 = KeQuantumEndTimerIncrement;
    goto LABEL_26;
  }
LABEL_11:
  LOBYTE(DueTime) = 0;
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (v7 == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement || v7 == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    v19 = KiSetClockTickRate(v7, v16, DueTime);
    v18 = v43;
    TimeIncrement = v19;
    v8 = v35;
    LOBYTE(DueTime) = 1;
    v15 = v36;
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = v8;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + TimeIncrement;
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v45 = v12;
    v54 = &v44;
    ClockOwner = CurrentPrcb->ClockOwner;
    p_ClockOwner = &ClockOwner;
    v58 = &v37;
    v60 = &v38;
    v62 = &v30;
    v64 = &v31;
    v66 = &v39;
    v68 = &v40;
    v70 = &v45;
    v72 = &v46;
    v74 = &v47;
    v76 = &v48;
    v33 = v32;
    v78 = &v33;
    v31 = DueTime;
    v39 = v8;
    v47 = v18;
    v44 = InterruptTimePrecise;
    v55 = 8LL;
    v57 = 1LL;
    v37 = v7;
    v59 = 4LL;
    v38 = TimeIncrement;
    v61 = 4LL;
    v30 = v16;
    v63 = 1LL;
    v65 = 1LL;
    v67 = 4LL;
    v40 = v15;
    v69 = 4LL;
    v71 = 8LL;
    v46 = v17;
    v73 = 8LL;
    v75 = 8LL;
    v48 = v12 - InterruptTimePrecise;
    v77 = 8LL;
    v79 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, byte_140047880, 0LL, 0LL, 15, v53);
  }
  if ( v16 )
  {
    v42 = 1397707336;
    v41 = TimeIncrement;
    if ( PopDiagHandleRegistered )
    {
      if ( PopDiagHandle )
      {
        LOBYTE(v18) = 4;
        if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                                *(_QWORD *)(PopDiagHandle + 32) + 96LL,
                                v18,
                                0x4000000000000004LL,
                                PopDiagHandle)
          || *(_WORD *)(v23 + 102)
          && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v23 + 40) + 96LL, v21, v22, v23) )
        {
          UserData.Ptr = (ULONGLONG)&v41;
          *(_QWORD *)&UserData.Size = 4LL;
          v51 = &v42;
          v52 = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_KERNEL_STRS_INTERNAL, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        }
      }
    }
  }
  if ( v34 )
  {
    v25 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v25->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
    _enable();
  }
  return TimeIncrement;
}
